/*Napisz program, który przyjmuje trzy liczby ca³kowite jako wejœcie od u¿ytkownika i u¿ywa operatora warunkowego, aby znaleŸæ i wyœwietliæ najmniejsz¹ z nich.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, min;
    scanf("%d %d %d", &a, &b, &c);

    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("%d", min);

    return 0;
}
