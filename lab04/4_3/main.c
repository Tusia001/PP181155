/*Wyznacz wartoœæ bitu na okreœlonej pozycji w liczbie ca³kowitej.
pozycje numerujemy od tylu
11 = 1011
pozycje      | 3 | 2 | 1 | 0|
wartosc bitu | 1 | 0 | 1 | 1|
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba = 11, pozycja1 = 3, pozycja2 = 2;

    int bit = ((liczba &(1 << pozycja1))>> pozycja1) & 1;
    printf("%d\n", bit);

    int bit2 = (liczba >> pozycja2) & 1;
    printf("%d\n", bit2);

    return 0;
}
