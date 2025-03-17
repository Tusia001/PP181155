/* Stwórz program, który prosi o wprowadzenie dwóch liczb zmiennoprzecinkowych i u¿ywa
operatora warunkowego, aby wyœwietliæ, która z nich jest wiêksza, lub czy s¹ równe z
dok³adnoœci¹ do dwóch miejsc po przecinku. */
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
