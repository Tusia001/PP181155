/* Napisz program, kt�ry przyjmuje od u�ytkownika dwie liczby ca�kowite i wy�wietla wi�ksz� z nich. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a>b){
        printf("liczba %d jest wieksza", a);
    }
    else{
            printf("liczba %d jest wieksza", b);}

    return 0;
}
