// Stw�rz struktur� Player o dw�ch polach: name (napis) i points (float). Nast�pnie stw�rz funkcj� getMVP, kt�rej argumentami jest niepusta tablica struktur Player oraz rozmiar tablicy. Funkcja ma zwr�ci� gracza (jako struktur�) z najwi�ksz� liczb� punkt�w. W przypadkukilku graczy w tablicy z najwi�ksz� liczb� punkt�w, to zwr�� pierwszego z mo�liwych. Stw�rz przypadek testowy. //
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
