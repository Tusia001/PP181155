//. Napisz funkcję printEven, która przyjmuje jako argument listę bez głowy o elementach typu:struct node {int i;struct node * next;};Funkcja ma wyświetlić te elementy listy, które znajdują się na parzystych pozycjach (indeksując od0). Stwórz przypadek testowy. Przykład: dla listy zawierającej elementy: 4,-5,3,0,11,-8 mają byćwyświetlone elementy: 4,3,11.Wskazówka: lista bez głowy to konstrukcja, w elementy znajdują się od samego początku listy. Jeślilista bez głowy ma 𝑛 elementów, to do jej stworzenia potrzeba 𝑛 struktur. Pusta lista bez głowy toNULL.//


#include <stdio.h>
#include <stdlib.h>

struct node {
    int i;
    struct node * next;
};

void printEven(struct node * list){
    struct node * ptr = list;
    int counter = 0;
    while(ptr != NULL){
        if (counter %2 ==0){
            printf("%d\n", ptr->i);
        }
        ptr = ptr->next;
        counter++;
    }
}
int main()
{
    struct node * list = malloc(sizeof(struct node));
    list->i = 4;
    list->next = malloc(sizeof(struct node));
    list->next->i = -5;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->i = 3;
    list->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->i = 0;
    list->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->i = 11;
    list->next->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->next->i =-8;
    list->next->next->next->next->next->next = NULL;
    printEven(list);
    return 0;
}
