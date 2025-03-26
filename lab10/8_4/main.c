/* Napisz funkcj� findMax z dwoma argumentami: wska�nikiem num1 na sta�� warto��
typu double i sta�ym wska�nikiem num2 na zmienn� typu double. Funkcja ma zwraca�
wi�ksz� warto�� spo�r�d tych, na kt�re wskazuj� num1 i num2. Utw�rz przypadek testowy. */

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
