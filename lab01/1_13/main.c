/*Napisz program, kt�ry wczytuje ze standardowego wej�cia zmiennoprzecinkow� i wypisuje na standardowym wyj�ciu jej warto�� bezwzgl�dn�. */

#include <stdio.h>
#include <math.h>

int main() {
    double liczba;
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%lf", &liczba);
    printf("Wartosc bezwzgledna: %.6f\n", fabs(liczba));
    return 0;
}
