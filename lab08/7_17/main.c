/* EGZAMIN
Napisz rekurencyjną funkcję calculate17, której argumentem jest nieujemna liczba całkowita 𝑛. Funkcja ma zwracać wartość wyrażoną wzorem 𝑓(𝑛) = 𝑓(0) + 𝑓(1) + … + 𝑓(𝑛 − 1), gdzie 𝑓(0) = 𝑓(1) = 1. Stwórz przypadek testowy */

#include <stdio.h>
#include <stdlib.h>

int calculate17(int n){
    if(n==0 || n == 1){
    return 1;
    }
    return 2*calculate17(n-1);
}

int main()
{
    printf("%d\n", calculate17(0));
    printf("%d\n", calculate17(1));
    printf("%d\n", calculate17(5));

    return 0;
}
