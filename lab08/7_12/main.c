/* DO POPRAWY -
Napisz funkcj� calculateGeometricSequenceRecursively, kt�rej argumentami s� dwie liczby ca�kowite: dodatnie n (numer wyrazu ci�gu do obliczenia) oraz d (iloraz ci�gu geometrycznego), przy za�o�eniu, �e wyraz pocz�tkowy ci�gu a1 wynosi 1. Funkcja ma zwraca� n -ty wyraz ci�gu geometrycznego, obliczony metod� rekurencyjn�. Stw�rz przypadek testowy. */

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
