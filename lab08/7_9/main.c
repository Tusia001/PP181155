/*Napisz funkcj� calculateFactorialRecursively, kt�rej argumentem jest liczba ca�kowita nieujemna n . Funkcja ma zwraca� warto�� silni liczby  n, obliczon� metod� rekurencyjn�. Stw�rz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int calculateFactorialRecursively(int n) {
    if (n < 0) {
        exit(-1);
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * calculateFactorialRecursively(n - 1); //
}

int main() {
    int liczba;

    printf("%llu\n",calculateFactorialRecursively(4));

    return 0;
}
