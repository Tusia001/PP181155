// . Napisz funkcjê lowercaseOdd, której argumentem jest napis. Funkcja ma za zadanie zamieniæznaki o nieparzystych indeksach na ma³e litery (o ile na tym miejscu jest znak wielkiej litery). Stwórz przypadek testowy. //

#include <stdio.h>
#include <stdlib.h>

void lowercaseOdd(char txt[]){
    for(int i=0;txt[i]!=0;i++){
        if( i %2 !=0){
            if ('A' <=txt[i] && txt[i] <='Z'){
                txt[i] -= ('A'-'a');
        }
        }
    }
}

int main()
{
    char napis[]= "HeLLO WOOrld";
    lowercaseOdd(napis);
    printf("%s", napis);
    return 0;
}
