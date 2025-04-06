/* Stw�rz funkcj� executeSequence, kt�ra przyjmuje dwa argumenty: wska�nik na funkcj� operation zwracaj�c� void i przyjmuj�c� int oraz liczb� ca�kowit� count. Funkcja executeSequence powinna wywo�a� funkcj� operation dok�adnie count razy, przekazuj�c jej jako argument kolejne liczby od 1 do count. Stw�rz przypadek testowy.*/

#include <stdio.h>
#include <stdlib.h>

void executeSequence(void (operation)(int), int count) {
    for (int i = 1; i <= count; i++) {
        operation(i);
    }
}

void printSquare(int x) {
    printf("%d\n", x*x);
}

int main() {
    executeSequence(printSquare, 4);

    return 0;
}
