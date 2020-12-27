#define DDRB  (*(volatile unsigned char*) 0x37)
#define PORTB (*(volatile unsigned char*) 0x38)

int main() {
	DDRB |= 0b1;   // DB0 as output
    PORTB |= 0b1;  // DB0 on   
}
