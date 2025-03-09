/*Odwróæ wartoœæ wszystkich bitów w liczbie ca³kowitej. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba = 11;


    liczba = ~liczba;

    printf(" %d", liczba);

    return 0;
}


