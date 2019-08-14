#!/bin/sh

set -e

dd if=/dev/zero of=uefi.img bs=512 count=93750
sgdisk -n 1 -t 1:ef00 -c 1:"EFI System Partition" uefi.img
dd if=/dev/zero of=part.img bs=512 count=91669
mformat -i part.img -h 32 -t 32 -n 64 -c 1
mmd -i part.img ::/EFI
mmd -i part.img ::/EFI/BOOT
mcopy -i part.img main.efi ::/EFI/BOOT/BOOTX64.EFI
dd if=part.img of=uefi.img bs=512 count=91669 seek=2048 conv=notrunc
sgdisk -p uefi.img
