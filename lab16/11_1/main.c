/*1. LABY / KOLOS EGZAMIN !!!!!!!!!
Napisz funkcjê length, która jako argument otrzymuje napis i zwraca jako wartoœæ jego d³ugoœæ.
U¿yj typu char i nie korzystaj ze wbudowanych funkcji poza operacjami wejœcia/wyjœcia. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int length(char txt[]){
    int i=0;
    while(txt[i] !='\0'){
        i++;
    }
    return i;
}

int length2(char *txt){
    int i=0;
    while(*(txt+i) !='\0'){
        i++;
    }
    return i;
}

int main()
{
    char t1[] = "Olsztyn";
    printf("%d\n", length(t1));
    printf("%d\n", length2(t1));
    return 0;
}
