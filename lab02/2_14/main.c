/*Oblicz pole tr�jk�ta o bokach a, b, i k�cie mi�dzy nimi w  C stopniach,
u�ywaj�c wzoru 0,5 *a *b *sinC,, przyjmuj�c  sinC~~C dla ma�ych k�t�w w radianach. */
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
