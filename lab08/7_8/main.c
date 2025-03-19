/*Napisz funkcjê countFunctionCalls, która nie przyjmuje ¿adnych argumentów. Funkcja ma zliczaæ i wypisywaæ na standardowym wyjœciu liczbê swoich wywo³añ od momentu uruchomienia programu. Stwórz przypadek testowy. Wykorzystaj zmienne statyczne. */
#include <stdio.h>
#include <stdlib.h>

void countFunctionCalls() {
    int licznik = 0;
    licznik++;
    printf("%d\n", licznik);
}

int main() {

    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();

    return 0;
}

