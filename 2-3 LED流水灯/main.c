#include <REGX52.H>
#include <INTRINS.H>

void Delay500ms()		//@12.000MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 205;
	k = 187;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main()
{
	while(1) {
		// 1 1111 1110
		P2 = 0xFE;
		Delay500ms();
		// 2 1111 1101
		P2 = 0xFD;
		Delay500ms();
		// 3 1111 1011
		P2 = 0xFB;
		Delay500ms();
		// 4 1111 0111
		P2 = 0xF7;
		Delay500ms();
		// 5 1110 1111
		P2 = 0xEF;
		Delay500ms();
		// 6 1101 1111
		P2 = 0xDF;
		Delay500ms();
		// 7 1011 1111
		P2 = 0xBF;
		Delay500ms();
		// 8 0111 1111
		P2 = 0x7F;
		Delay500ms();
	}
}


