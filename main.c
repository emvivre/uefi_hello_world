/*
  ===========================================================================

  Copyright (C) 2019 Emvivre

  This file is part of HELLO_WORLD.

  HELLO_WORLD is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  HELLO_WORLD is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with HELLO_WORLD.  If not, see <http://www.gnu.org/licenses/>.

  ===========================================================================
*/

#include <efi.h>
#include <efilib.h>

EFI_STATUS EFIAPI efi_main (EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable)
{

  InitializeLib(ImageHandle, SystemTable);
  Print(L"Hello, world!\n");
  Pause();
  return EFI_SUCCESS;
}
