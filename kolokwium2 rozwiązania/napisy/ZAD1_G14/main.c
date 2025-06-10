//Napisz funkcjê capitalizeEven, której argumentem jest napis. Funkcja ma za zadanie zamieniæznaki o parzystych indeksach na wielkie litery (o ile na tym miejscu jest znak ma³ej litery).Stwórz przypadek testowy. //
#include <stdio.h>
#include <stdlib.h>

void capitalizeEven(char *napis){
    for(int i = 0; napis[i] != 0; i++){
        if( i % 2 == 0){
            if(napis[i] >= 'a' && napis[i] <= 'z'){
                napis[i] -= ('a' - 'A');
            }
        }

    }
}

int main()
{
    char napis[] = "HELLO world";
    capitalizeEven(napis);
    printf("%s\n", napis);

    return 0;
}
