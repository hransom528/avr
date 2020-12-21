#define DDRB  (*(volatile unsigned char*) 0x17)
#define PORTB (*(volatile unsigned char*) 0x18)
#define F_CPU 1000000UL // 1Mhz

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
