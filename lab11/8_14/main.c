/* Napisz funkcjê multPtrs z dwoma argumentami: wskaŸnikiem num1 na sta³¹ wartoœæ typu double i sta³ym wskaŸnikiem num2 na zmienn¹ typu double. Funkcja zwraca iloczyn wartoœci wskazywanych przez te wskaŸniki. Utwórz przypadek testowy. */

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
