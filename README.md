# uefi_hello_world
EFI program printing the well known "Hello World" message.

To build this project type :
```
$ make
```

To build a disk image and test it with qemu :
```
$ ./build_and_test.sh
> fs0:
> main.efi
```

To build a disk image ready to burn it to a USB mass storage key :
```
$ ./build.sh
$ sudo dd if=uefi.img dd=/dev/sdc
```
Assuming */dev/sdc* is your USB mass storage key.

