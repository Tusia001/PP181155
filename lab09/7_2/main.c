/* Napisz funkcj� calculateAbsoluteValue, kt�rej argumentem jest liczba zmiennoprzecinkowa. Funkcja ma zwraca� warto�� bezwzgl�dn� liczby przekazanej jako argument
funkcji. Stw�rz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

float calculateAbsoluteValue(float a){
    if(a >= 0){
        return a;
    }
    if (a<0)
        return -a;
}

int main()
{
    printf("%f", calculateAbsoluteValue(303.9));
    printf("%f", calculateAbsoluteValue(-204.3));
    printf("%f", calculateAbsoluteValue(0));
    return 0;
}
