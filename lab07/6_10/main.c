/* Napisz program, kt�ry sprawdza podzielno�� liczby n przez wszystkie liczby od 2 do n/2. Program powinien wypisa� wszystkie dzielniki tej liczby. Wczytaj warto�� n od u�ytkownika. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 2; i <= n/2; i++){
        //if (n%i == 0){
        //    printf("dzielnik %d\n", i);
        //}
        if (!(n%i)){
            printf("dzielnik %d\n", i);
        }
    }
    return 0;
}
