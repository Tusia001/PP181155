/*Napisz program, kt�ry wczytuje od u�ytkownika trzy liczby ca�kowite i wypisuje ich �redni� jako warto�� zmiennoprzecinkow�. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("%f", (a+b+c)/3.0);
	return 0;
}
