SbYSft
================================
The template for solving your bootloader problems, or reverse.

This little beast provides a template for playing with ARM/STM32 development.

Bootloader support is provided by [OpenBLT](https://www.feaser.com/en/openblt.php), while the hardware stack is
based on [libopencm3](https://github.com/libopencm3/libopencm3).

Currently supported hardware:

* all that libopencm3 does
* as an example project: my Olimex [STM32-H103](https://www.olimex.com/Products/ARM/ST/STM32-H103/)

# USB-Stack
Maple based hardware (insert example ... mine STM32-H103, maple, DISC-pin. big confusion on the internetz about
how to do it correct).
    
<How to get a working usb device with a bootloader>

# Motivation
Development cycle:

One Interface for uploading new firmware or operating as USB-Device.

1. start BootCommander
2. Press RESET
3. done

vs

1. extra hardware
2. extra port
3. st-link
4. upload
 