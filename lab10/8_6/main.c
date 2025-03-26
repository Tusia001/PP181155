/* Napisz funkcj� initFloats, kt�ra nie przyjmuje argument�w i rezerwuje blok trzech
zmiennych typu float, ustawiaj�c ich warto�ci kolejno na 4.5, 2.3, -4.2. Funkcja zwraca
wska�nik na pocz�tkow� ze zmiennych w bloku. Utw�rz przypadek testowy w funkcji
main, kt�ry wy�wietla warto�ci z bloku stworzonego przez funkcj�. */

#include <stdio.h>
#include <stdlib.h>

float* initFloats() {
    float* ptr = (float*)malloc(3 * sizeof(float));
    if (ptr == NULL) {
        printf("B��d alokacji pami�ci!\n");
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
