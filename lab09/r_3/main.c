/*3. Napisz rekurencyjną funkcję, której argumentem jest dodatnia liczba całkowita 𝑛. Funkcja ma zwracać sumę:5 + 5*5 + 5*5*5 + … + 5 … 5
𝑛 𝑟𝑎𝑧� */

#include <stdio.h>
#include <stdlib.h>

int term(int n){
    if (n==1){
        return 5;
    }
    return term(n-1)*10 +5;
}

int series(int n){
    if(n==1){
        return 5;
    }
    return series(n-1)+term(n);
}

int main()
{
    printf("%d\n", term(6));
    printf("%d\n", series(3));
    return 0;
}
