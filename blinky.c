#include <avr/io.h>
#include <utils/delay.h>

int main()
{
	int i;
        DDRC = 0xff;
	
	while (1)
	        for(i = 0; i < 8; i++) {
	                PORTC = i;
	       		_delay_ms(1000); 
		}
	return 0;
}
