/*Napisz program, kt�ry przyjmuje dwie liczby ca�kowite jako wej�cie od u�ytkownika i u�ywa operatora warunkowego, aby znale�� i wy�wietli� najwi�ksz� z nich */


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
