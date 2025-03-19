/* Napisz funkcj� calculateFactorial, kt�rej argumentem jest liczba ca�kowita nieujemna. Funkcja ma zwraca� warto�� silni liczby przekazanej jako argument funkcji, obliczon� metod� nierekurencyjn�. Stw�rz przypadek testowy. */

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
