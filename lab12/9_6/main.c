/* LABY Stwórz funkcjê applyCondition, która przyjmuje trzy argumenty: wskaŸnik na funkcjê condition zwracaj¹c¹ wartoœæ typu int i przyjmuj¹c¹ int, wskaŸnik na funkcjê action równie¿ przyjmuj¹c¹ i zwracaj¹c¹ int, oraz wartoœæ ca³kowit¹ value. Funkcja applyCondition powinna najpierw wywo³aæ condition z value jako argumentem. Jeœli wynik to 1, applyCondition powinna nastêpnie wywo³aæ action na value i zwróciæ wynik. W przeciwnym wypadku powinna zwróciæ value bez zmian. */

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
