/* LABY Napisz funkcj� findMaxValue, kt�ra przyjmuje jako argumenty tablic� liczb ca�kowitych numbers oraz jej rozmiar size (dodatnia liczba ca�kowita). Funkcja powinna przeszuka� tablic� i wy�wietli� maksymaln� warto�� znalezion� w tej tablicy. Stw�rz przypadek testowy. */

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
