/*Napisz funkcjê calculateFactorialRecursively, której argumentem jest liczba ca³kowita nieujemna n . Funkcja ma zwracaæ wartoœæ silni liczby  n, obliczon¹ metod¹ rekurencyjn¹. Stwórz przypadek testowy. */

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
