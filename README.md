# AVR-Makefile
A Makefile template for AVR-based C projects that include libraries

To use, rename the file to Makefile. Edit the items prefixed with a * to suit your needs. Specifically, the following need to be updated:
TARGET      : Name of your main project
MCU         : AVR microcontroller
AVR_PROG    : ISP Programmer
AVR_PORT    : Port the ISP programmer is connected to
AVR_FUSES   : Fuse settings for this AVR / project
PASSPARAM   : Any parameters that need to be passed via the Makefile
DEPS        : Dependencies. Specifiy any library .h files here along with Makefile
OBJS        : Include an entery for the main program (TARGET) with .o, as well as
            : entries for libraries that need to be compiled. Specify the path to
            : libraries without using a leading "\".
