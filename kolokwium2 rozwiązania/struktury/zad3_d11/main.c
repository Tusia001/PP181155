// . Stwórz strukturê Movie o dwóch polach: title (napis) i duration (int). Nastêpnie stwórzfunkcjê getTime, której argumentami jest niepusta tablica struktur Movie oraz rozmiar tablicy. Funkcja ma zwróciæ czas trwania (jako liczbê) filmu o najkrótszym tytule. Jeœli kilka tytu³ów ma najkrótszy tytu³, uwzglêdnij pierwszy z takich. Stwórz przypadek testowy. //
#include <stdio.h>
#include <stdlib.h>
struct Movie{
    char * title;
    int  duration;
};
int length(char txt[]){
    int i=0;
    while(txt[i]){
        i++;
    }
    return i;
}
int getTime(struct Movie tab[], int n){
    struct Movie temp = tab[0];
    for(int i=1;i<n;i++){
        if (length(temp.title) > length(tab[i].title)){
            temp = tab[i];
        }
    }
    return temp.duration;
}
int main()
{
    struct Movie tab[] = {
        {"Ida", 5},
        {"Bogowie", 12},
        {"Oblawa", 7},
        {"Sami swoi", 5}
    };
    printf("%d\n", getTime(tab, 4));
    return 0;
}
