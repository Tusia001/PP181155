/* Napisz funkcjê calculateAbsoluteValue, której argumentem jest liczba zmiennoprzecinkowa. Funkcja ma zwracaæ wartoœæ bezwzglêdn¹ liczby przekazanej jako argument
funkcji. Stwórz przypadek testowy. */

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
