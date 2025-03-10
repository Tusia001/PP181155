#include <stdio.h>
int main() {
    int p = 15;   // p = 15, q = , r =
    int q = 6;    // p = 15, q = 6, r =
    int r = 1;    // p = 15, q = 6, r = 1
    p = p | q;    // p = 15, q = 6, r = 1
    q = p & 10;   // p = 15, q = 10, r = 1
    r = r << 3;   // p = 15, q = 10, r = 8
    p = p ^ r;    // p = 7, q = 10, r = 8
    q = q >> 1;   // p = 7, q = 5, r = 8
    r = ~p;       // p = 7, q = 5, r = -8
    p = q | r;    // p = -3, q = 5, r = -8
    q = p & r;    // p = -3, q = -8, r = -8
    r = r ^ q;    // p = -3, q = -8, r = 0
    return 0;
}
