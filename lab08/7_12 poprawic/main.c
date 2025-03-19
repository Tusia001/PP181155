/* DO POPRAWY -
Napisz funkcjê calculateGeometricSequenceRecursively, której argumentami s¹ dwie liczby ca³kowite: dodatnie n (numer wyrazu ci¹gu do obliczenia) oraz d (iloraz ci¹gu geometrycznego), przy za³o¿eniu, ¿e wyraz pocz¹tkowy ci¹gu a1 wynosi 1. Funkcja ma zwracaæ n -ty wyraz ci¹gu geometrycznego, obliczony metod¹ rekurencyjn¹. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int calculateGeometricSequenceRecursively(int n, int d){
    if (n <= 0){
        exit(-1);
    }
    if(n==1){
        return 1;
    }
    return d * calculateGeometricSequenceRecursively(n-1, d);
}

int main()
{
    printf("%d", calculateGeometricSequenceRecursively(5, 3));
    return 0;
}
