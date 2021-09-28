#include <stdio.h>
# include <math.h>
void main()
{
	printf("Dani tri tochki na chislovoy osi A, B, C sootvetstvenno...");
	float A, B, C, AC, BC, proizv;
	A = 2;
	B = 9;
	C = 7;
	AC = (C - A);
	printf("AC = ");
	printf("%f\n", AC);
	BC = (B - C);
	printf("BC = ");
	printf("%f\n", BC);
	proizv = (AC * BC);
	printf("Proizvedenie dlin AC i BC = ");
	printf("%f\n", proizv);
}