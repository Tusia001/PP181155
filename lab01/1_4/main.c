/*Napisz program, który wczytuje od u¿ytkownika trzy liczby ca³kowite i wypisuje ich œredni¹ jako wartoœæ zmiennoprzecinkow¹. */

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
