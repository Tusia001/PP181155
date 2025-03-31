/* Napisz funkcjê subPtrs z dwoma argumentami: wskaŸnikiem num1 na sta³¹ wartoœæ typu double i sta³ym wskaŸnikiem num2 na zmienn¹ typu double. Funkcja ma zwracaæ ró¿nicê wartoœci, na które wskazuj¹ num1 i num2. Utwórz przypadek testowy. */

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
