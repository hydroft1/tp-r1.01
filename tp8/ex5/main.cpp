/*
Programme : Compter les valeurs positives d'un tableau
BUT : compter les valeurs positives d'un tableau
Date : 25/10/24
Auteur : Alexandre M.
*/

#include <iostream>
using namespace std;

// Déclaration sous-programme
void compterValPos(const int tab[], unsigned int nbCases, unsigned int & totalValPos);
// BUT : Compte les valeurs positives d'un tableau tab, de taille prédéfinie à nbCases, dans totalValPos

int main(void)
{
    // Variables
    int tab[5] = {1, 2, 3, 4, 5};
    unsigned int nbCases = 5;
    unsigned int totalValPos;

    // Appel sous-programme
    compterValPos(tab, nbCases, totalValPos);

    cout << totalValPos << endl;

    return 0;
}

// définition sous-programme
void compterValPos(const int tab[], unsigned int nbCases, unsigned int & totalValPos)
{
    totalValPos = 0;
    for (unsigned int i = 0; i < nbCases; i++)
    {
        if (tab[i] > 0)
        {
            totalValPos++;
        }
    }
}
