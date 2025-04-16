/* LABY Napisz funkcj� countVow przyjmuj�c� jako argument tablic� znak�w typu char i zwracaj�c� liczb� znak�w w tej tablicy, kt�re s� samog�oskami z alfabetu �aci�skiego. Nie korzystaj ze wbudowanych funkcji j�zyka opr�cz operacji wej�cia/wyj�cia. Stw�rz przypadek testowy dla tej funkcji. */

#include <stdio.h>
#include <stdlib.h>

int countVow(char txt[]){
    char vowels[] = "aeoiuyAEOUIY";
    int counter=0;
    for(int i=0;txt[i] !=0; i++){
        for(int j=0; vowels[j] !=0;j++){
            if (txt[i] == vowels[j]){
                counter++;
                break;
            }
        }
    }
    return counter;
}

int isVowel(char c){
    char vowels[] = "aeoiuyAEOUIY";
    for(int j=0; vowels[j] !=0;j++){
        if (c == vowels[j]){
            return 1;
        }
    }
    return 0;
}

int countVow2(char txt[]){
    int counter=0;
    for(int i=0;txt[i] !=0; i++){
        if (isVowel(txt[i])){
            counter++;
        }
    }
    return counter;
}

int countVow5(char nap[]) {
    int i = 0, licznik = 0;
    while (nap[i] != '\0') {
        char c = nap[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            licznik++;
        }
        i++;
    }
    return licznik;
}

int main()
{
    printf("%d\n", countVow("Olsztyn"));
    printf("%d\n", countVow2("Olsztyn"));

    char tekst[] = "Hello UniTest!";
    printf("SamogLoski: %d\n", countVow5(tekst));
    return 0;
}
