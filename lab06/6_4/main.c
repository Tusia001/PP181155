/* Stwórz program, który oblicza i wyœwietla silniê podanej przez u¿ytkownika
nieujemnej liczby ca³kowitej, u¿ywaj¹c pêtli for. */
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
