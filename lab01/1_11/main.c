/* Napisz program, kt�ry wczytuje ze standardowego wej�cia dwie liczby wymierne reprezentuj�ce d�ugo�ci bok�w tr�jk�ta prostok�tnego. Nast�pnie oblicz i wy�wietl d�ugo�� przeciwprostok�tnej. */

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Podaj dlugosc pierwszego boku: ");
    scanf("%lf", &a);

    printf("Podaj dlugosc drugiego boku: ");
    scanf("%lf", &b);

    c = sqrt(a * a + b * b);

    printf("Dlugosc przeciwprostokatnej: %.2f\n", c);
    return 0;
}
