/* 2. W jednym pliku wykonaj czynno�ci:
� Napisz funkcj� sum z dwoma argumentami typu int. Funkcja ma zwraca� sum� warto�ci
przekazanych przez argumenty. Stw�rz przypadek testowy.
� Napisz funkcj� sumVals z dwoma argumentami, kt�re s� wska�nikami do zmiennych typu
int. Funkcja powinna zwraca� sum� warto�ci, na kt�re wskazuj� te argumenty. Utw�rz
przypadek testowy.
� Napisz funkcj� addPtr z trzema argumentami, kt�re s� wska�nikami do zmiennych typu
int. Funkcja ma by� procedur� (typ zwracany void). Funkcja ma ustawi� warto��
zmiennej wskazywanej przez trzeci argument funkcji jako sum� warto�ci wskazywanych
przez dwa wcze�niejsze argumenty. Utw�rz przypadek testowy. */


#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y){
    return x+y;
}

int sumVals(int *p1, int *p2){
    return *p1 + *p2;
}

void addPtr(int*p1, int*p2, int*p3){
    *p3 = *p1+ *p2;
}

int main()
{
    int x=2, y=4;
    printf("%d\n", sum(x,y));
    printf("%d\n", sumVals(&x, &y));
    int wynik;
    addPtr(&x, &y, &wynik);
    printf("%d\n", wynik);
    return 0;
}
