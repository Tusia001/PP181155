/* LABY Stw�rz funkcj� applyCondition, kt�ra przyjmuje trzy argumenty: wska�nik na funkcj� condition zwracaj�c� warto�� typu int i przyjmuj�c� int, wska�nik na funkcj� action r�wnie� przyjmuj�c� i zwracaj�c� int, oraz warto�� ca�kowit� value. Funkcja applyCondition powinna najpierw wywo�a� condition z value jako argumentem. Je�li wynik to 1, applyCondition powinna nast�pnie wywo�a� action na value i zwr�ci� wynik. W przeciwnym wypadku powinna zwr�ci� value bez zmian. */

#include <stdio.h>
#include <stdlib.h>

int applyCondition(int (*condition)(int), int (*action)(int), int value){
    int result = condition(value);
    if (result == 1){
        return action(value);
    }
    return value;
}

int cond1(int x){
    return x%2==1;
}

int cond2(int x){
    return abs(x)%2;
}

int shift(int arg){
    return arg +5;
}

int main()
{
    printf("%d\n", applyCondition(cond1, shift, 7));
    printf("%d\n", applyCondition(cond1, shift, -7));
    printf("%d\n", applyCondition(cond2, shift, -7));
    printf("%d\n", applyCondition(cond2, shift, 6));
    return 0;
}
