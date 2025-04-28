/* LAB Napisz funkcjê countVow przyjmuj¹c¹ jako argument tablicê znaków typu char i zwracaj¹c¹ liczbê znaków w tej tablicy, które s¹ samog³oskami z alfabetu ³aciñskiego. Nie korzystaj ze wbudowanych funkcji jêzyka oprócz operacji wejœcia/wyjœcia. Stwórz przypadek testowy dla tej funkcji. */


#include <stdio.h>
#include <stdlib.h>

int countNums(char txt[]){
    int counter =0;
    for(int i=0; txt[i] !=0;i++){
        if ('0' <= txt[i] && txt[i] <= '9'){
            counter++;
        }
    }
    return counter;
}

int main()
{
    printf("%d\n", countNums("ghsdh5654gs"));
    return 0;
}
