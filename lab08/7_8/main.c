/*Napisz funkcj� countFunctionCalls, kt�ra nie przyjmuje �adnych argument�w. Funkcja ma zlicza� i wypisywa� na standardowym wyj�ciu liczb� swoich wywo�a� od momentu uruchomienia programu. Stw�rz przypadek testowy. Wykorzystaj zmienne statyczne. */
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

