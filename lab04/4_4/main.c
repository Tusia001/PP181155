/* Zeruj wartosc bitu na okreslonej pozycji w liczbie calkowitej. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int liczba = 11, pozycja = 3;

    liczba = liczba & ~(1 << pozycja);

    printf("Nowa liczba po wyzerowaniu bitu %d: %d\n", pozycja, liczba);

    return 0;
}

