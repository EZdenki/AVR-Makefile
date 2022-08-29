# AVR-Makefile
A Makefile template and small sample application for AVR-based C projects that include libraries.
To use, copy the Makefile to the root directory of your project and edit the items prefixed with a * to suit your needs. Specifically, the following need to be updated:<br>
<table>
<tr><td>TARGET</td><td>Name of your main project</td></tr>
<tr><td>MCU</td><td>AVR microcontroller</td></tr>
<tr><td>AVR_PROG</td><td>ISP Programmer</td></tr>
<tr><td>AVR_PORT</td><td>Port the ISP programmer is connected to</td></tr>
<tr><td>AVR_FUSES</td><td>Fuse settings for this AVR / project</td></tr>
<tr><td>PASSPARAM</td><td>Any parameters that need to be passed via the Makefile</td></tr>
<tr><td>DEPS</td><td>Dependencies. Specifiy any library .h files here along with Makefile
<tr><td>OBJS</td><td>Include an entery for the main program (TARGET) with .o, as well as entries for libraries that need to be compiled. Specify the path to 
libraries without using a leading "/".</td></tr>
<tr><td>clean</td><td>Can add rm command to delete compiled object files from libraries.</td></tr>
</table>
<br>
Make Directives:<br>
- make<br>
  - Compile any new code and upload to AVR.<br>
- make clean<br>
  - Remove .o, .hex, .elf files.<br>
- make fuse<br>
  - Run avrdude to set the AVR fuses.<br>
