/* Marta Szczepañska - DS2 - 181155 - WARIANT 104 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    printf("Podaj liczbe a: ");
    scanf("%f", &a);

    printf("Podaj liczbe b: ");
    scanf("%f", &b);

    printf("Podaj liczbe c: ");
    scanf("%f", &c);

    float wynik = c - ((b - 2*a) / (4 + a));

    printf("Wynik =  %f", wynik);
    return 0;
}
