//Napisz funkcjê countSpaces, której argumentem jest napis. Funkcja ma zwróciæ liczbê znaków spacji wystêpuj¹cych w napisie. Stwórz przypadek testowy.
//

#include <stdio.h>
#include <stdlib.h>

int countSpaces(char *txt){
    int suma = 0;
    int i = 0;
    while(txt[i] != '\0'){
        if(txt[i] == ' '){
            suma += 1;
        }
        i++;
    }
    return suma;

}

int main()
{
    char napis[] = "nded ded dwd frfrfr.";
    printf("%d\n", countSpaces(napis));
    return 0;
}
