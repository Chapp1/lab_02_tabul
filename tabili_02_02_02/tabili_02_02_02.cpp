// tabili_02_02_02.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <stdio.h>
#include <math.h>
int main()
{//0112312
	double a = 2, b = 4, c = -3, d = 3, h1 = 0.2 , h2 = 0.15 ;
	printf("%c\\%c", 'Y', 'X');
	for (double x = a; x <= b; x += h1)
		printf("\t%8.2f", x);
	printf("\n");
	for (double y = c; y <= d; y += h2)
	{
		printf("%.2f", y);
		for (double x = a; x <= b; x += h2)
		{
			double z = (x*y-(y+1)/(sqrt(x) ));
			printf("\t%8.2f", z);
		}
		printf("\n");
	}
	printf("\n");
	getchar();
	return 0;
}
