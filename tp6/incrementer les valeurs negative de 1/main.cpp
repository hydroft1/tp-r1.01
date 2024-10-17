/*
Programme : Incrementer les valeurs negatives d'un tableau
But : Incrémenter de 1 toutes les valeurs négatives d'un tableau
Date : 16/10/24
Auteur : Alexandre M.
*/

#include <iostream>
using namespace std;

int main(void)
{
    // Variables
    const unsigned int NB_CASES = 10; // taille du tableau
    float tab[NB_CASES] = {9, -15, 10, 45, -78, 32, 7, 8, 9, -10}; // valeur du tableau

    // Affichage du tableau avant incrémentation
    cout << "Tableau avant incrémentation : ";
    for (unsigned int i = 0; i < NB_CASES; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;

    // Incrémentation des valeurs négatives
    for (unsigned int i = 0; i < NB_CASES; i++)
    {
        if (tab[i] < 0)
        {
            tab[i]++;
        }
    }

    // Affichage du tableau après incrémentation
    cout << "Tableau après incrémentation : ";
    for (unsigned int i = 0; i < NB_CASES; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;

    return 0;
}
