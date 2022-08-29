//  blinklib.c

#include <avr/io.h>
#include "blinklib.h"

void
setup( void )
{
    tDDR |= (1<<tDDRPin);
    DDRD |= (1<<DDD5);
}

void
togglePin( void )
{
    tPinPort = (1<<PIND5);
}
