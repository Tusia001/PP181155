/*Napisz funkcjê toUpperNew, która przyjmuje jako argument tablicê znaków typu char i zamienia w niej wszystkie ma³e litery na du¿e. Nie korzystaj ze wbudowanych funkcji jêzyka oprócz operacji wejœcia/wyjœcia. Stwórz przypadek testowy dla tej funkcji. */

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

void toUpperNew(char txt[]){
    for(int i=0;txt[i]!=0;i++){
        if ('a' <=txt[i] && txt[i] <='z'){
            txt[i] -= ('a'-'A');
        }
    }
}

int main()
{
    char t1[] = "Olsztyn123abc";
    toUpperNew(t1);
    printf("%s\n", t1);
    return 0;
}
