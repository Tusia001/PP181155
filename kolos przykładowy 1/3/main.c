/*Napisz rekurencyjną funkcję sequence_value_d, która dla otrzymanej w argumencie nieujemnej liczby całkowitej 𝑛 zwraca wartość elementu o indeksie 𝑛 ciągu zdefiniowanego w następujący sposób:
𝑑0 = 3
𝑑𝑛 = 𝑑𝑛−1 − 3, 𝑛-parzyste,
𝑑𝑛 = 2 ⋅ 𝑑𝑛−1 + 4, 𝑛-nieparzyste.
*/


#include <stdio.h>
#include <stdlib.h>

int sequence_value_d(int n) {
    if (n == 0)
        return 3;
    if (n % 2 == 0)
        return sequence_value_d(n - 1) - 3;
    else
        return 2 * sequence_value_d(n - 1) + 4;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        printf("d(%d) = %d\n", i, sequence_value_d(n));
    }
    return 0;
}
