#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // make the LED pin an output for PORTB5
    //DDRB = 1 << 1;
    DDRB |= _BV(1);

    while (1)
    {
        _delay_ms(2400); //LG PC

        // toggle the LED
        PORTB ^= _BV(1);
    }

    return 0;
}
