/*Napisz program, kt�ry sprawdza, czy dana liczba n jest liczb� pierwsz�. Program powinien sprawdzi� wszystkie potencjalne dzielniki od 2 do pierwiastka z n (wykorzystaj p�tl� do obliczenia pierwiastka). Wypisz odpowiedni komunikat. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n <2){
        printf("Liczba nie jest ani pierwsza ani zlozona");
        exit(-1);
    }
    int j;
    while(j*j <=n){
        j++;
    }
    for(int i=2;i<=j-1;i++){
        if (n%i ==0){
            printf("Liczba jest zlozona");
            exit(0);
        }
    }
    printf("Liczba jest pierwsza");
    return 0;
}
