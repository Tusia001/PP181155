/* Stw�rz program, kt�ry oblicza i wy�wietla silni� podanej przez u�ytkownika
nieujemnej liczby ca�kowitej, u�ywaj�c p�tli for. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int silnia = 1;
    for(int i = 1; i <= n; i++){
        silnia *= i;
    }
    printf("Silnia wynosi: %d\n", silnia);
    return 0;
}
