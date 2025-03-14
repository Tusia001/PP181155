/*Napisz program, który wczytuje ze standardowego wejœcia zmiennoprzecinkow¹ i wypisuje na standardowym wyjœciu jej wartoœæ bezwzglêdn¹. */

#include <stdio.h>
#include <math.h>

int main() {
    double liczba;
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%lf", &liczba);
    printf("Wartosc bezwzgledna: %.6f\n", fabs(liczba));
    return 0;
}
