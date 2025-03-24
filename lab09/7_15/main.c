/* . Napisz funkcję calculate15, której argumentem jest dodatnia liczba całkowita 𝑛. Funkcja ma zwracać wartość wyrażoną wzorem 𝑓(𝑛) = 𝑓(𝑛 − 1) + 2𝑓(𝑛 − 2), gdzie 𝑓(1) = 1 i
𝑓(2) = 2. Stwórz przypadek testowy.
*/

#include <stdio.h>
#include <stdlib.h>

int calculate15(int n){
    if (n == 1){
        return 1;
    }
    if (n==2){
        return 2;
    }
    return calculate15(n-1)+2*calculate15(n-2);
}

int main()
{
    printf("%d\n", calculate15(3));
    printf("%d\n", calculate15(4));
    printf("%d\n", calculate15(5));
    printf("%d\n", calculate15(6));
    return 0;
}
