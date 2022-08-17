#include <avr/io.h>
#include <util/delay.h>

int main(void)
{

  DDRB |= (1 << PB4);

  while (1)
  {
    PORTB = (1 << PB4);
    _delay_ms(500);
    PORTB &= ~(1 << PB4);
    _delay_ms(500);
  }
}