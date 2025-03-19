/* Napisz funkcjê calculateFactorial, której argumentem jest liczba ca³kowita nieujemna. Funkcja ma zwracaæ wartoœæ silni liczby przekazanej jako argument funkcji, obliczon¹ metod¹ nierekurencyjn¹. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int calculateFactorial(int a){
    if(a<0){
        exit(-1);
    }
    int silnia=1;
    for(int i=1;i<=a;i++){
        silnia *=i;
    }
    return silnia;
}

int main()
{
    printf("%d\n", calculateFactorial(4));
    return 0;
}
