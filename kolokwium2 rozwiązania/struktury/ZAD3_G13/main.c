//Napisz struktur� Samochod z polami marka (tablica znak�w d�ugo�ci 50) oraz przebieg (typu int). Nast�pnie napisz dwie funkcje i wywo�aj ka�d� z nich co najmniej jeden raz: a) initSamochod - funkcja przyjmuje dwa argumenty: mark� i przebieg, i zwraca wska�nik na nowo utworzon� struktur�, ustawiaj�c sk�adowe z przekazanych argument�w. Dodatkowo funkcja powinna sprawdzi�, aby marka by�a napisem d�ugo�ci co najmniej 2 i przebieg by� wi�kszy ni� 0. W przypadku nie spe�nienia jednego z warunk�w, funkcja powinna zwraca� NULL. b) zwiekszPrzebieg - funkcja, kt�rej argumentem jest wska�nik do struktury typu Samochod.Funkcja ma doda� 1000 do przebiegu w przekazanym argumencie. //
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
        printf("Samoch�d: %s, przebieg: %d km\n", s1->marka, s1->przebieg);
        zwiekszPrzebieg(s1);
        printf("Po zwi�kszeniu: %s, przebieg: %d km\n", s1->marka, s1->przebieg);
        free(s1); // Pami�taj o zwolnieniu
    } else {
        printf("B��dne dane wej�ciowe.\n");
    }
    // Test z niepoprawnymi danymi
    struct Samochod *s2 = initSamochod("A", 0);
    if (s2 == NULL) {
        printf("Samoch�d z b��dnymi danymi zosta� odrzucony.\n");
    }
    return 0;
}
