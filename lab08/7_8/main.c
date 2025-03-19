/*Napisz funkcj� countFunctionCalls, kt�ra nie przyjmuje �adnych argument�w. Funkcja ma zlicza� i wypisywa� na standardowym wyj�ciu liczb� swoich wywo�a� od momentu uruchomienia programu. Stw�rz przypadek testowy. Wykorzystaj zmienne statyczne. */
#include <stdio.h>
#include <stdlib.h>

void countFunctionCalls() {
    static int callCount = 0;
    callCount++;
    printf("%d\n", callCount);
}

int main() {

    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();

    return 0;
}

