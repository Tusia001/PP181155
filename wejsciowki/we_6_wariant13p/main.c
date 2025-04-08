/* ZROBIC we wariant 13P 07-04-2025, napisz funkcje multiplyByTwo z dwoma argumentami: wskaŸnikiem na sta³¹ typu float i wskaŸnikiem na zmienn¹ typu float. Funkcja ma pomno¿yæ wartoœæ sta³ej przez 2 i zapisaæ wynik pod agresem wskazanym przez drugi argument. */


#include <stdio.h>
#include <stdlib.h>

void multiplyByTwo(const float *input, float *output){
    *output = (*input) * 2;
}


int main() {
    float liczba = 3.5;
    float wynik;

    multiplyByTwo(&liczba, &wynik);
    printf("%.2f\n", wynik);
    return 0;
}
