/*Przesu� bity liczby ca�kowitej o okre�lon� liczb� pozycji w lewo. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba = 11, przesuniecie = 3;

    liczba = liczba << przesuniecie;
    printf("%d", liczba);

    return 0;
}

