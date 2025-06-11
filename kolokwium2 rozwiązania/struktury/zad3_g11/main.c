// Stwórz strukturê Player o dwóch polach: name (napis) i points (float). Nastêpnie stwórz funkcjê getMVP, której argumentami jest niepusta tablica struktur Player oraz rozmiar tablicy. Funkcja ma zwróciæ gracza (jako strukturê) z najwiêksz¹ liczb¹ punktów. W przypadkukilku graczy w tablicy z najwiêksz¹ liczb¹ punktów, to zwróæ pierwszego z mo¿liwych. Stwórz przypadek testowy. //
#include <stdio.h>
#include <stdlib.h>
struct Player{
    char *name;
    float points;
};
struct Player getMVP(struct Player tab[], int size) {
    struct Player temp = tab[0];
    for(int i =1; i< size; i++){
        if(temp.points < tab[i].points){
            temp = tab[i];
        }
    }
    return temp;
}
int main()
{
    struct Player tab[]={
        {"Marta", 123},
        {"Ala", 456},
        {"Kacper", 456},
    };
    struct Player best = getMVP(tab, 3);
    printf("%s (%.1f pkt)\n", best.name, best.points);

    return 0;
}
