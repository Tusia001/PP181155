/*  Napisz program, który wczytuje od u¿ytkownika stopieñ wielomianu, wspó³czynniki (od
najwy¿szej potêgi do wyrazu wolnego) oraz wartoœæ x. Oblicz wartoœæ wielomianu za
pomoc¹ schematu Hornera, wykorzystuj¹c pêtlê. Wyœwietl wynik obliczeñ */
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
