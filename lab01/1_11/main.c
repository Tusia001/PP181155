/* Napisz program, który wczytuje ze standardowego wejœcia dwie liczby wymierne reprezentuj¹ce d³ugoœci boków trójk¹ta prostok¹tnego. Nastêpnie oblicz i wyœwietl d³ugoœæ przeciwprostok¹tnej. */

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
