/* Sprawdü, czy liczba ca≥kowita jest
parzysta czy nieparzysta bez uøycia instrukcji warunkowych.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3, b = 4;
    printf("%s\n", (a & 1) ? "Nieparzysta" : "Parzysta");
    printf("%s\n", (b & 1) ? "Nieparzysta" : "Parzysta");
    return 0;
}
