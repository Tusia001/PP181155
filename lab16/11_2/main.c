/* 2. Napisz funkcjê countNums, która przyjmuje jako argument tablicê znaków typu char i
zwraca liczbê znaków w tej tablicy, które s¹ cyframi. Nie korzystaj ze wbudowanych funkcji
jêzyka oprócz operacji wejœcia/wyjœcia. Stwórz przypadek testowy dla swojej funkcji. */

#include <stdio.h>
#include <stdlib.h>


int countNums(char nap[]) {
    int i = 0, licznik = 0;
    while (nap[i] != '\0') {
        if (nap[i] >= '0' && nap[i] <= '9') {
            licznik++;
        }
        i++;
    }
    return licznik;
}

int main() {
    char tekst[] = "a01b2c3!";
    printf("Liczba cyfr: %d\n", countNums(tekst));
    return 0;
}
