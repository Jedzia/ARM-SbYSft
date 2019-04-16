##
## This file is part of the libopencm3 project.
##
## Copyright (C) 2009 Uwe Hermann <uwe@hermann-uwe.de>
##
## This library is free software: you can redistribute it and/or modify
## it under the terms of the GNU Lesser General Public License as published by
## the Free Software Foundation, either version 3 of the License, or
## (at your option) any later version.
##
## This library is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU Lesser General Public License for more details.
##
## You should have received a copy of the GNU Lesser General Public License
## along with this library.  If not, see <http://www.gnu.org/licenses/>.
##

OBJS = init.o

#DEFS		+= -I$(OPENCM3_DIR)/include
DEFS		+= -I../../../../../OpenBLT/Target/ARMCM3_STM32F1_Olimex_STM32H103_GCC/Boot/lib/STM32F1xx_HAL_Driver/Inc
DEFS		+= -I../../../../../OpenBLT/Target/ARMCM3_STM32F1_Olimex_STM32H103_GCC/Boot/lib/CMSIS/Include
DEFS		+= -I../../../../../OpenBLT/Target/ARMCM3_STM32F1_Olimex_STM32H103_GCC/Example_Prog/lib/CMSIS/Device/ST/STM32F1xx/Include
DEFS 		+= -DSTM32F103xB

BINARY = cdcacm


#LDSCRIPT = ../stm32-h103.orig.ld
LDSCRIPT = ../stm32-h103.ld

#upload: $(BUILD_DIR)/$(TARGET).srec
#	$(UPLOADER) -s=xcp -t=xcp_usb $(BUILD_DIR)/$(TARGET).srec

include ../../Makefile.include

