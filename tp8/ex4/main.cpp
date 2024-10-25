/*
Programme : Echanger deux cases d'un tableau
BUT : échanger les valeurs de deux cases d'un tableau
Date : 22/10
Auteur : Alexandre M.
*/

#include <iostream>
using namespace std;

// Déclaration sous-programme
void echanger(int tab[], unsigned int & indice1, unsigned int & indice2);
// BUT : échanger les valeurs deux cases d'un tableau

int main(void)
{
    // Variables
    int tab[5] = {1, 2, 3, 4, 5};
    unsigned int indice1;
    unsigned int indice2;

    cout << "Entrez l'indice de la première case : ";
    cin >> indice1;
    cout << "Entrez l'indice de la deuxième case : ";
    cin >> indice2;

    // Appel du sous-programme
    echanger(tab, indice1, indice2);

    for (int i = 0; i < 5; i++)
    {
        cout << tab[i] << " ";
    }

    return 0;
}

// définition sous-programme
void echanger(int tab[], unsigned int & indice1, unsigned int & indice2)
{
    int temp;
    temp = tab[indice1];
    tab[indice1] = tab[indice2];
    tab[indice2] = temp;
}
