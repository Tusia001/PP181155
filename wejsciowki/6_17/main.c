/*  Napisz program, kt�ry wczytuje od u�ytkownika stopie� wielomianu, wsp�czynniki (od
najwy�szej pot�gi do wyrazu wolnego) oraz warto�� x. Oblicz warto�� wielomianu za
pomoc� schematu Hornera, wykorzystuj�c p�tl�. Wy�wietl wynik oblicze� */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    double x, wynik;
    scanf("%d", &n);
    double wsp[n + 1];


    printf("Podaj wspolczynniki wielomianu: \n");
    for (i = 0; i <= n; i++) {
        scanf("%lf", &wsp[i]);
    }

    printf("Podaj wartosc x: ");
    scanf("%lf", &x);

    wynik = wsp[0];
    for (i = 1; i <= n; i++) {
        wynik = wynik * x + wsp[i];
    }

    printf("%.6lf\n", wynik);

    return 0;
}
