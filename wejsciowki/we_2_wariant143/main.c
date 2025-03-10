#include <stdio.h>
#include <stdlib.h>

int main() {
    int matematyka, fizyka, suma_punktow;

    printf("Podaj liczbe punktow z matematyki: ");
    scanf("%d", &matematyka);

    printf("Podaj liczbe punktow z fizyki: ");
    scanf("%d", &fizyka);

    suma_punktow = matematyka + fizyka;

    if (suma_punktow < 30 || matematyka < 15 || fizyka < 15) {
        printf("Ocena koncowa: Niedostateczna\n");
    } else if (suma_punktow >= 30 && suma_punktow <= 49) {
        printf("Ocena koncowa: Dostateczna\n");
    } else if (suma_punktow >= 50 && suma_punktow <= 69) {
        printf("Ocena koncowa: Dobra\n");
    } else if (suma_punktow >= 70 && suma_punktow <= 90) {
        printf("Ocena koncowa: Bardzo dobra\n");
    } else if (suma_punktow >= 91 && suma_punktow <= 100) {
        printf("Ocena koncowa: Celujaca\n");
    }

    return 0;
}
