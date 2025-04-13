/*3. Napisz funkcjê maxPtr z dwoma argumentami, które s¹ wskaŸnikami na zmienne typu int.
Funkcja zwraca wskaŸnik na zmienn¹ o najwiêkszej wartoœci spoœród tych, na które wskazuj¹
argumenty. W przypadku gdy wskazywane wartoœci s¹ równe, zwróæ drugi wskaŸnik. Utwórz
przypadek testowy w main, aby wyœwietliæ najmniejsz¹ wartoœæ spoœród trzech zmiennych.*/

int* maxPtr(int* wsk1, int* wsk2) {
    if (*wsk1 > *wsk2) {
        return wsk1;
    }
    return wsk2;
}

int main() {
    int a = 4, b = 3, c = 5;

    int* min = &a;
    if (*maxPtr(&b, min) == *min) min = &b;
    if (*maxPtr(&c, min) == *min) min = &c;

    printf("Najmniejsza wartosc: %d\n", *min);
    return 0;
}
