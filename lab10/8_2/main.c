/* 2. W jednym pliku wykonaj czynnoœci:
• Napisz funkcjê sum z dwoma argumentami typu int. Funkcja ma zwracaæ sumê wartoœci
przekazanych przez argumenty. Stwórz przypadek testowy.
• Napisz funkcjê sumVals z dwoma argumentami, które s¹ wskaŸnikami do zmiennych typu
int. Funkcja powinna zwracaæ sumê wartoœci, na które wskazuj¹ te argumenty. Utwórz
przypadek testowy.
• Napisz funkcjê addPtr z trzema argumentami, które s¹ wskaŸnikami do zmiennych typu
int. Funkcja ma byæ procedur¹ (typ zwracany void). Funkcja ma ustawiæ wartoœæ
zmiennej wskazywanej przez trzeci argument funkcji jako sumê wartoœci wskazywanych
przez dwa wczeœniejsze argumenty. Utwórz przypadek testowy. */


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
