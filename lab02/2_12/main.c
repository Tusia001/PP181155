/* Oblicz wartoœæ wyra¿enia, gdzie a, b, c s¹ ró¿ne od zera. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a = 2.13, b = 10.009, c = 43;
    double wynik = 1.0 / ((1.0/a)+(1.0/b)+(1.0/c));
    printf("%f", wynik);
    return 0;
}
