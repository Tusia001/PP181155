/*Napisz program, kt�ry przyjmuje trzy liczby ca�kowite jako wej�cie od u�ytkownika i u�ywa operatora warunkowego, aby znale�� i wy�wietli� najmniejsz� z nich.*/

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
