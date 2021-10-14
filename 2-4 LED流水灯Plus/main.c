#include <REGX52.H>
#include <INTRINS.H>

void Delay1ms(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j;
	while(xms) {
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}

}

void main()
{
	while(1) {
		// 1 1111 1110
		P2 = 0xFE;
		Delay1ms(100);
		// 2 1111 1101
		P2 = 0xFD;
		Delay1ms(100);
		// 3 1111 1011
		P2 = 0xFB;
		Delay1ms(100);
		// 4 1111 0111
		P2 = 0xF7;
		Delay1ms(100);
		// 5 1110 1111
		P2 = 0xEF;
		Delay1ms(100);
		// 6 1101 1111
		P2 = 0xDF;
		Delay1ms(100);
		// 7 1011 1111
		P2 = 0xBF;
		Delay1ms(100);
		// 8 0111 1111
		P2 = 0x7F;
		Delay1ms(100);
	}
}


