/* Stw�rz program, kt�ry prosi o wprowadzenie dw�ch liczb zmiennoprzecinkowych i u�ywa
operatora warunkowego, aby wy�wietli�, kt�ra z nich jest wi�ksza, lub czy s� r�wne z
dok�adno�ci� do dw�ch miejsc po przecinku. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b;
    printf("Podaj 2 liczby zmiennoprzecinkowe: ");
    scanf("%f %f", &a, &b);

    printf((fabs(a-b)< 0.01) ? "liczby rowne" : (a>b ? "pierwsza liczba jest wieksza" : "liczba druga jest wieksza"));

    return 0;
}
