/* LABY Napisz funkcjê findMaxValue, która przyjmuje jako argumenty tablicê liczb ca³kowitych numbers oraz jej rozmiar size (dodatnia liczba ca³kowita). Funkcja powinna przeszukaæ tablicê i wyœwietliæ maksymaln¹ wartoœæ znalezion¹ w tej tablicy. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

void findMaxValue(int numbers[], int size){
    int temp = numbers[0];
    for (int i=1; i<size; i++){
        if (temp < numbers[i]){
            temp = numbers[i];
        }
    }
    printf("%d\n", temp);

}

int main()
{
    int tab[]= {4, -5, 9};
    int tab1[]={-8, -100};
    findMaxValue(tab, 3);
    findMaxValue(tab1, 2);

    return 0;
}
