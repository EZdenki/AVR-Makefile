//  blink.c

#include <blinklib/blinklib.h>
#include <avr/io.h>
#include <util/delay.h>
int
main( void )
{
    setup();
    OSCCAL=85;
    while( 1 )
    {
        togglePin();
        _delay_us(10);
    }
}
