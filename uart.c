#include <avr/io.h>
void main()
{
  DDRB=0xff;     
  uart_init();
}
