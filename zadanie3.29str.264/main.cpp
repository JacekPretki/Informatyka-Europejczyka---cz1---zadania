#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int n=3, m=4;
int tablica[n][m];
int main()
{
    srand(time(0));
    cout << "a) Wygenerowanie liczb losowych z przedzialu [-7,20) do tablicy\n";
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            tablica[i][j]=rand()%28 -7;
            cout << tablica[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nb) Wypisywanie elementow tablicy z podzialem na wiersze\n";
    for (int i=0; i<n; i++)
    {
        cout << "Wiersz nr " << i << " ->\t";
        for (int j=0; j<m; j++)
        {
            cout << tablica[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nc) Obliczenie iloczynu tych elementow tablicy, ktorych wartosc nie jest podzielna przez siedem\n";
    int iloczyn{1}, ilosc{0};
    bool flaga=false;
    for (int i=0; i<n;i++)
    {
        for (int j=0; j<m;j++)
        {
            if (tablica[i][j]%7!=0)
                iloczyn*=tablica[i][j];
            if (i*j>0)
                ilosc++;
            if (tablica[i][j]>4)
                flaga=true;
        }
    }
    cout << "Wartosc iloczynu: " << iloczyn << "\n";
    cout << "\nd) Obliczenie liczby skladnikow tablicy, ktorych iloczyn indeksow jest liczba dodatnia\n";
    cout << "Liczba elementow: " << ilosc << "\n";
    cout << "\ne) Sprawdzenie czy w tablicy istnieje element, ktorego wartosc jest wieksza od 4\n";
    if (flaga)
        cout << "Istnieje taki element\n";
    else
        cout << "Nie istnieje taki element\n";
    return 0;
}
