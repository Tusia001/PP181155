/* Stwórz funkcjê executeSequence, która przyjmuje dwa argumenty: wskaŸnik na funkcjê operation zwracaj¹c¹ void i przyjmuj¹c¹ int oraz liczbê ca³kowit¹ count. Funkcja executeSequence powinna wywo³aæ funkcjê operation dok³adnie count razy, przekazuj¹c jej jako argument kolejne liczby od 1 do count. Stwórz przypadek testowy.*/

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
