#define DDRB  (*(volatile unsigned char*) 0x37)
#define PORTB (*(volatile unsigned char*) 0x38)
#define F_CPU 8000000UL // 8Mhz

#include <util/delay.h>

int main() {
	DDRB |= 1; // DB0 as output
    
    while (1) {
        PORTB |= 1;
		_delay_ms(1000);
        PORTB ^= 1;
		_delay_ms(1000);
	}
}
