/*Napisz program, który prosi użytkownika o wprowadzenie liczby całkowitej. Program powinien wyświetlić informację, czy wprowadzona liczba jest dodatnia, ujemna czy równa zero. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Wprowadz liczbe: ");
    scanf("%d", &a);
    if (a > 0){
        printf("Liczba wieksza od zera.");
    } else if (a < 0){
            printf("Liczba jest mniejsza od zera.");
    }else{
        printf("Liczba jest rowna 0.");
        }
    return 0;
}
