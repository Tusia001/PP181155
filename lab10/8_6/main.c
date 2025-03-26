/* Napisz funkcjê initFloats, która nie przyjmuje argumentów i rezerwuje blok trzech
zmiennych typu float, ustawiaj¹c ich wartoœci kolejno na 4.5, 2.3, -4.2. Funkcja zwraca
wskaŸnik na pocz¹tkow¹ ze zmiennych w bloku. Utwórz przypadek testowy w funkcji
main, który wyœwietla wartoœci z bloku stworzonego przez funkcjê. */

#include <stdio.h>
#include <stdlib.h>

float* initFloats() {
    float* ptr = (float*)malloc(3 * sizeof(float));
    if (ptr == NULL) {
        printf("B³¹d alokacji pamiêci!\n");
        exit(1);
    }

    ptr[0] = 4.5;
    ptr[1] = 2.3;
    ptr[2] = -4.2;

    return ptr;
}

int main() {
    float* dane = initFloats();
    printf("Wartosci z initFloats():\n");
    for (int i = 0; i < 3; i++) {
        printf("dane[%d] = %.2f\n", i, dane[i]);
    }
    free(dane);

    return 0;
}
