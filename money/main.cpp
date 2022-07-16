#include "money.h"

int main()
{
	Money g1(3, 75);    // 3 Euros, 75 cents
	Money g2(2, 25);

        g2.print();
	
	Money g3, g4;

	g4 = g1;
	g4 += g2;
	g4.print();

	g3 = g1 + g2;
	g3.print();

	g3 = 7 * g1;
	g3.print();

	g3 = (g1 + g2 + g1 + g2 + g1 + g2) / 6;
        g3.print();

	return 0;
}
