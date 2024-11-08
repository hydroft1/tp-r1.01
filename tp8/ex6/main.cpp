/*
Programme : Inverser les valeurs d'un tableau
But : Inverser les valeurs d'un tableau de taille nbCases
Date : 25/10
Auteur : Alexandre.M
*/

#include <iostream>
using namespace std;

// Déclaration sous-programme
void inverserTableau(int tableau[], unsigned int nbCases);
// BUT : Inverser les valeurs d'un tableau de taille nbCases

int main(void)
{
    // Variables
    int tab[10] = {1, 2, 3, 4, -5, 1, -3, 4, 2, 3};
    const unsigned int NB_CASES = 10;

    // Appel sous-programme
    inverserTableau(tab, NB_CASES);

    for (int i = 0; i < NB_CASES; i++)
    {
        cout << tab[i] << " ";
    }

    return 0;
}

// Définition sous-programme
void inverserTableau(int tableau[], unsigned int nbCases)
{
    int temp;
    for (unsigned int i = 0; i < nbCases / 2; i++)
    {
        temp = tableau[i];
        tableau[i] = tableau[nbCases - 1 - i];
        tableau[nbCases - 1 - i] = temp;
    }
}
