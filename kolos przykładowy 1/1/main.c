/*1. Napisz program, który wczytuje ze standardowego wejścia dwie liczby całkowite 𝑛 i 𝑚 (zakładamy, że 𝑛 < 𝑚) i wypisuje na standardowym wyjściu iloczyn liczb nieparzystych z przedziału
od [𝑛, 𝑚].
Przykładowe wejście:
3
7
Przykładowe wyjście:
105*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int iloczyn = 1;
    for( int i = n; i <=m; i++){
        if(i%2!=0){
            iloczyn *= i;
        }
    }
    printf("%d", iloczyn);
    return 0;
}
