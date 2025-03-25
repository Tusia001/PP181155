/* 4. Napisz funkcję rekurencyjną, która wypisze wszystkie liczby naturalne od 𝑛 do 2𝑛 (włącznie) dla pewnej dodatniej liczby całkowitej 𝑛. Możesz samodzielnie ustalić liczbę i typ
argumentów pamiętając, że funkcja ma być rekurencyjna. Stwórz przypadek testowy */

#include <stdio.h>
#include <stdlib.h>

// Funkcja rekurencyjna wypisująca liczby od n do 2n
void printFromNTo2N(int current, int end) {
    if (current > end) {
        return; // warunek zakończenia
    }

    printf("%d ", current);
    printFromNTo2N(current + 1, end); // rekurencja
}

// Przypadek testowy
int main() {
    int n = 5;

    printf("Liczby od %d do %d:\n", n, 2 * n);
    printFromNTo2N(n, 2 * n);

    return 0;
}

