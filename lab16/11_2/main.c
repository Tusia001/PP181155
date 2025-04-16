/* 2. Napisz funkcj� countNums, kt�ra przyjmuje jako argument tablic� znak�w typu char i
zwraca liczb� znak�w w tej tablicy, kt�re s� cyframi. Nie korzystaj ze wbudowanych funkcji
j�zyka opr�cz operacji wej�cia/wyj�cia. Stw�rz przypadek testowy dla swojej funkcji. */

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
