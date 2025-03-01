/*Oblicz pole trójk¹ta o bokach a, b, i k¹cie miêdzy nimi w  C stopniach,
u¿ywaj¹c wzoru 0,5 *a *b *sinC,, przyjmuj¹c  sinC~~C dla ma³ych k¹tów w radianach. */
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265358979323846

int main()
{
    double a = 4, b = 5.5, C = 40.5;
    double C_radiany = C * (PI / 180.0);
    double wynik = 0.5 * a * b * C_radiany;
    printf("%f", wynik);
    return 0;
}
