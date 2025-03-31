/* Napisz funkcj� subPtrs z dwoma argumentami: wska�nikiem num1 na sta�� warto�� typu double i sta�ym wska�nikiem num2 na zmienn� typu double. Funkcja ma zwraca� r�nic� warto�ci, na kt�re wskazuj� num1 i num2. Utw�rz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

double subPtrs(const double *num1, double *const num2) {
    return *num1 - *num2;
}

int main() {
    double a = 10.5;
    double b = 3.2;

    double wynik = subPtrs(&a, &b);

    printf("%.2f, %.2f, wynik = %.2f\n", a, b, wynik);

    return 0;
}
