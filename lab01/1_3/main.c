/*Zaprojektuj aplikacjê, która pyta u¿ytkownika o jego rok urodzenia, a nastêpnie wypisuje rok poprzedni (o jeden mniejszy).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Podaj rok urodzenia: ");
	int a;
	scanf("%d", &a);
    	printf("Rok wczesniej: %d", a-1);
	return 0;
}
