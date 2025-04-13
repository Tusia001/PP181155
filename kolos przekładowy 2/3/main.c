/*3. Napisz funkcj� maxPtr z dwoma argumentami, kt�re s� wska�nikami na zmienne typu int.
Funkcja zwraca wska�nik na zmienn� o najwi�kszej warto�ci spo�r�d tych, na kt�re wskazuj�
argumenty. W przypadku gdy wskazywane warto�ci s� r�wne, zwr�� drugi wska�nik. Utw�rz
przypadek testowy w main, aby wy�wietli� najmniejsz� warto�� spo�r�d trzech zmiennych.*/

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
