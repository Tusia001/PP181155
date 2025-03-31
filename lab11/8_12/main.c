/*Napisz funkcjê linFuncVal z trzema argumentami: wskaŸnikiem a na sta³¹ wartoœæ typu float, sta³ym wskaŸnikiem b na zmienn¹ typu float, i wskaŸnikiem x na sta³¹ wartoœæ typu float. Funkcja ma obliczaæ i zwracaæ wartoœæ funkcji liniowej y=ax+b dla argumentu x, gdzie a i b s¹ wskazywane przez odpowiednie wskaŸniki. Utwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

float linFuncVal(const float *a, float *const b, const float *x) {
    float wynik = (*a) * (*x) + (*b);
    return wynik;
}

int main() {
    float a = 2.0, b = 3.0, x = 4.0;

    float y = linFuncVal(&a, &b, &x);

    printf("y = %.2f * %.2f + %.2f = %.2f\n", a, x, b, y);

    return 0;
}




