/*Napisz program, który przyjmuje dwie liczby ca³kowite jako wejœcie od u¿ytkownika i u¿ywa operatora warunkowego, aby znaleŸæ i wyœwietliæ najwiêksz¹ z nich */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, max;
    scanf("%d" "%d", &a, &b);


    max = (a > b) ? a : b;
    printf("%d", max);

    return 0;
}
