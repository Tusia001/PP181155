/*Napisz funkcjê wStrConcat, która otrzymuje jako argumenty trzy tablice znaków: nap1, nap2 oraz nap3 (u¿yj typu znakowego wchar_t). Funkcja zapisuje do tablicy nap3 konkatenacjê (po³¹czenie) napisów znajduj¹cych siê w tablicach nap1 i nap2. Zak³adamy, ¿e w tablicy nap3 jest wystarczaj¹co du¿o miejsca. Nie korzystaj ze wbudowanych funkcji jêzyka oprócz operacji wejœcia/wyjœcia. Stwórz przypadek testowy dla tej funkcji.*/

#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

void wStrConcat(wchar_t nap1[], wchar_t nap2[], wchar_t nap3[]) {
    int i = 0, j = 0;

    // kopiujemy nap1
    while (nap1[i] != L'\0') {
        nap3[i] = nap1[i];
        i++;
    }

    // kopiujemy nap2
    while (nap2[j] != L'\0') {
        nap3[i] = nap2[j];
        i++;
        j++;
    }

    nap3[i] = L'\0';
}

int main() {
    wchar_t a[] = L"Kolokwium ";
    wchar_t b[] = L"zdane!";
    wchar_t wynik[100];

    wStrConcat(a, b, wynik);

    wprintf(L"%ls\n", wynik); // u¿ywamy %ls dla wchar_t!

    return 0;
}

