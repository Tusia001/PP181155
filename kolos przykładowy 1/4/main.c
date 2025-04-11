/*Napisz funkcj�, kt�ra otrzymuje cztery argumenty: dodatni� liczb� ca�kowit� n, n-elementowe
tablice tab1 i tab2 oraz n-elementow� tablic� tab3 o elementach typu double. Funkcja powinna
oblicza� iloczyn element�w tablic tab1 i tab2 o tych samych indeksach i zapisywa� wyniki do
tablicy tab3. Stw�rz przypadek testowy dla funkcji. */


#include <stdio.h>
#include <stdlib.h>

void multiply_arrays(int n, const double *tab1, const double *tab2, double *tab3) {
    for (int i = 0; i < n; i++) {
        *(tab3 + i) = (*(tab1 + i)) * (*(tab2 + i));
    }
}
int main() {
    int n = 3;
    double tab1[] = {2.0, 4.0, 6.0};
    double tab2[] = {3.0, 5.0, 7.0};
    double tab3[3];

    multiply_arrays(n, tab1, tab2, tab3);

    printf("tab3 = ");
    for (int i = 0; i < n; i++) {
        printf("%.1lf ", tab3[i]);
    }
    printf("\n");

    return 0;
}

