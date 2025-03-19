/*Napisz program, kt�ry wyznacza przybli�on� warto�� pierwiastka kwadratowego z liczby
a metod� Newtona (iteracyjn�). Pocz�tkowe przybli�enie x = a/2, a kolejne obliczamy
ze wzoru x_{i+1} = (x_i + a/x_i)/2. Wykonaj 10 iteracji algorytmu i wypisz ko�cowy wynik */

#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, x;
    int i;
    scanf("%lf", &a);

    x = a / 2.0;

    for (i = 0; i < 10; i++) {
        x = (x + a / x) / 2.0;
    }

    printf("%.6lf\n", x);

    return 0;
}
