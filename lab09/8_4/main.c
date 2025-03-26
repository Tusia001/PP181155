/* Napisz funkcjê findMax z dwoma argumentami: wskaŸnikiem num1 na sta³¹ wartoœæ
typu double i sta³ym wskaŸnikiem num2 na zmienn¹ typu double. Funkcja ma zwracaæ
wiêksz¹ wartoœæ spoœród tych, na które wskazuj¹ num1 i num2. Utwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

double findMax(double const *num1, double * const num2){
    if (*num1 >= *num2){
        return *num1;
    }
    return *num2;
}

int main()
{
    double a = 4.3, b = -3.9;
    printf("%lf\n", findMax(&a, &b));
    return 0;
}
