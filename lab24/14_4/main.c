/* LAB Napisz funkcj� printListWithHead, kt�ra przyjmuje jako argument list� z g�ow� o elementach typu:
struct element {
    int x;
    struct element * next;
};

Funkcja ma wy�wietli� kolejne elementy listy w kolejnych wierszach lub wy�wietli� komunikat, �e lista jest pusta. Stw�rz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printListWithHead(struct element * list){
    if (list->next == NULL){
        printf("Empty list\n");
    }
    struct element * ptr = list->next;
    while(ptr != NULL){
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}


int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 4;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 5;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = -12;
    list->next->next->next->next = NULL;
    printListWithHead(list);
    //pusta lista z glowa
    struct element * list2 = malloc(sizeof(struct element));
    list2->next = NULL;
    printListWithHead(list2);
    return 0;
}
