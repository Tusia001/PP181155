/* 2. Napisz funkcję, która ma dwa argumenty: dodatnią liczbę całkowitą 𝑛 oraz liczbę wymierną 𝑥. Funkcja ma zwrócić jako liczbę wartość wyrażenia będącego sumą szeregu:
(𝑥 + 1) + (𝑥^2 + 2) + … + (𝑥^𝑛 + 𝑛). */

#include <stdio.h>
#include <stdlib.h>

float wyr(int n, float x){
    float suma = 0;
    float potega = 1;
    for(int i = 1; i <= n; i++){
        potega *= x;
        suma += potega + i;
    }
    return suma;
}
int main()
{
    printf("%f\n", wyr(4,5));
    return 0;
}
