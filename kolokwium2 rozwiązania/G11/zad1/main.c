//Napisz funkcj� countSpaces, kt�rej argumentem jest napis. Funkcja ma zwr�ci� liczb� znak�w spacji wyst�puj�cych w napisie. Stw�rz przypadek testowy.
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
