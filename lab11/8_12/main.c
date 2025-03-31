/*Napisz funkcj� linFuncVal z trzema argumentami: wska�nikiem a na sta�� warto�� typu float, sta�ym wska�nikiem b na zmienn� typu float, i wska�nikiem x na sta�� warto�� typu float. Funkcja ma oblicza� i zwraca� warto�� funkcji liniowej y=ax+b dla argumentu x, gdzie a i b s� wskazywane przez odpowiednie wska�niki. Utw�rz przypadek testowy. */

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




