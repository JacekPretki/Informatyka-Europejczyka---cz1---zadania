#include <iostream>

using namespace std;

const int n=5, m=6;
int tablica[n][m];

void wypiszWiersze()
{
    for (int i=0; i<m; i++)
    {
        cout << "Wiersz nr " << i << " -> \t";
        for (int j=0; j<n; j++)
        {
            cout << tablica[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    cout << "a) Generowanie elementow tablicy" << endl;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            tablica[i][j]=i+j;
            cout << tablica[i][j] << '\t';
        }
        cout << endl;
    }

    cout << "\nb) Wypisanie elementow tablicy z podzialem na wiersze\n";
    wypiszWiersze();
    cout << "\nc) Zamiana dwoch kolumn tablicy: [1] z [2]\n";
    for (int i=0; i<m; i++)
    {
        swap(tablica[i][1],tablica[i][2]);
        for (int j=0; j<n; j++)
        {
            cout << tablica[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nd) Zamiana dwoch wierszy tablicy wskazanych przez uzytkownika\n";
    int wiersz1{}, wiersz2{};
    cout << "Podaj pierwszy wiersz do zmiany: (0-5) ";
    cin >> wiersz1;
    cout << "Podaj drugi wiersz do zmiany: (0-5) ";
    cin >> wiersz2;
    for (int i=0; i<n; i++)
    {
        swap (tablica[wiersz1][i], tablica[wiersz2][i]);
    }

    wypiszWiersze();
    return 0;
}
