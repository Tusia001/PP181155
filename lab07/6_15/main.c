/* Napisz program symuluj�cy wydawanie reszty. Program powinien wczyta� kwot� do wydania i wypisa�, ile monet o nomina�ach 5, 2 i 1 nale�y wyda�, aby u�y� jak najmniejszej liczby monet. Wypisz liczb� monet ka�dego typu. */

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
