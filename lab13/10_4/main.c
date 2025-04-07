/* skonczyc Napisz funkcjê copyArr, która otrzymuje trzy argumenty: dodatni¹ liczbê ca³kowit¹ n
oraz dwie n-elementowe tablice tab1, tab2 o elementach typu int i przepisuje kolejno
elementy tablicy tab1 do tablicy tab2. Stwórz przypadek testowy. */


#include <stdio.h>
#include <stdlib.h>

void copyArr(int n, int tab1[], int tab2[]) {
    for (int i = 0; i < n; i++) {
        tab2[i] = tab1[i];
    }
}

int main() {
    int tab1[] = {10, 20, 30};
    int tab2[3];
    int n = 3;

    copyArr(n, tab1, tab2);

    for (int i = 0; i < n; i++) {
        printf("%d ", tab2[i]);
    }
    return 0;
}
