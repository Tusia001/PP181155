//Napisz strukturê Samochod z polami marka (tablica znaków d³ugoœci 50) oraz przebieg (typu int). Nastêpnie napisz dwie funkcje i wywo³aj ka¿d¹ z nich co najmniej jeden raz: a) initSamochod - funkcja przyjmuje dwa argumenty: markê i przebieg, i zwraca wskaŸnik na nowo utworzon¹ strukturê, ustawiaj¹c sk³adowe z przekazanych argumentów. Dodatkowo funkcja powinna sprawdziæ, aby marka by³a napisem d³ugoœci co najmniej 2 i przebieg by³ wiêkszy ni¿ 0. W przypadku nie spe³nienia jednego z warunków, funkcja powinna zwracaæ NULL. b) zwiekszPrzebieg - funkcja, której argumentem jest wskaŸnik do struktury typu Samochod.Funkcja ma dodaæ 1000 do przebiegu w przekazanym argumencie. //
#include <stdio.h>
#include <stdlib.h>
struct Samochod{
    char marka[50];
    int przebieg;
};
int dlugosc(char tekst[]) {
    int dl = 0;
    while (tekst[dl] != '\0') {
        dl++;
    }
    return dl;
}

struct Samochod *initSamochod(char marka[], int przebieg) {
    int d = dlugosc(marka);
    if (d < 2 || przebieg <= 0) {
        return NULL;
    }

    struct Samochod *temp = malloc(sizeof(struct Samochod));
    if (temp == NULL) return NULL;

    temp->przebieg = przebieg;
    for (int i = 0; i < d && i < 49; i++) {
        temp->marka[i] = marka[i];
    }
    temp->marka[d] = '\0';

    return temp;
}
int zwiekszPrzebieg(struct Samochod *s){
    if(s!= NULL){
        s->przebieg = przebieg + 1000;
    }
}
int main() {
    struct Samochod *s1 = initSamochod("Opel", 150000);
    if (s1 != NULL) {
        printf("Samochód: %s, przebieg: %d km\n", s1->marka, s1->przebieg);
        zwiekszPrzebieg(s1);
        printf("Po zwiêkszeniu: %s, przebieg: %d km\n", s1->marka, s1->przebieg);
        free(s1); // Pamiêtaj o zwolnieniu
    } else {
        printf("B³êdne dane wejœciowe.\n");
    }
    // Test z niepoprawnymi danymi
    struct Samochod *s2 = initSamochod("A", 0);
    if (s2 == NULL) {
        printf("Samochód z b³êdnymi danymi zosta³ odrzucony.\n");
    }
    return 0;
}
