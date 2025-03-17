/* Napisz program symuluj¹cy wydawanie reszty. Program powinien wczytaæ kwotê do wydania i wypisaæ, ile monet o nomina³ach 5, 2 i 1 nale¿y wydaæ, aby u¿yæ jak najmniejszej liczby monet. Wypisz liczbê monet ka¿dego typu. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ile5=0, ile2=0, ile1=0;
    while(n>=5){
        n -=5;
        ile5++;
    }
    while(n>=2){
        n -=2;
        ile2++;
    }

    printf("%d %d %d\n", ile5, ile2, ile1);
    return 0;
}
