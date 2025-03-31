/* LABY - Napisz funkcj� initFloats, kt�ra nie przyjmuje argument�w i rezerwuje blok trzech
zmiennych typu float, ustawiaj�c ich warto�ci kolejno na 4.5, 2.3, -4.2. Funkcja zwraca
wska�nik na pocz�tkow� ze zmiennych w bloku. Utw�rz przypadek testowy w funkcji
main, kt�ry wy�wietla warto�ci z bloku stworzonego przez funkcj�. */


#include <stdio.h>
#include <stdlib.h>

float* initFloats(){
    float * temp = malloc(3*sizeof(float));
    if (temp == NULL){
        return NULL;
    }
    *temp = 4.5,
    *(temp+1) = 2.3;
    *(temp+2) = -4.2;
    return temp;
}

int main()
{
    float * result = initFloats();
    printf("%f\n", *result);
    printf("%f\n", *(result+1));
    printf("%f\n", *(result+2));
    free(result);
    return 0;
}

