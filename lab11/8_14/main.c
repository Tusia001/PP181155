/* Napisz funkcj� multPtrs z dwoma argumentami: wska�nikiem num1 na sta�� warto�� typu double i sta�ym wska�nikiem num2 na zmienn� typu double. Funkcja zwraca iloczyn warto�ci wskazywanych przez te wska�niki. Utw�rz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

double multPtrs(const double *num1, double *const num2){
    return (*num1) * (*num2);
}

int main()
{
    double a = 4.3, b = 3.8;
    printf("%f", multPtrs(&a, &b));
    return 0;
}
