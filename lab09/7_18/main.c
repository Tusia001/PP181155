/* . Napisz rekrurencyjną funkcję calculateGCD, której argumentami są dwie dodatnie liczby
całkowite 𝑛 i 𝑚. Funkcja ma zwracać największy wspólny dzielnik (NWD) tych liczb
algorytmem Euklidesa. Stwórz przypadek testowy. */


#include <stdio.h>
#include <stdlib.h>

int calculateGCD(int n, int m) {
    if (n == 0) return m;
    return calculateGCD(m % n, n);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a <= 0 || b <= 0) {
        printf("Błąd: liczby muszą być dodatnie.\n");
        return 1;
    }
    printf("NWD(%d, %d) = %d\n", a, b, calculateGCD(a, b));

    return 0;
}
