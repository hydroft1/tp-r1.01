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
    const unsigned int NB_CASES = 10;
    float tab[NB_CASES] = {9, -15, 10, 45, -78, 32, 7, 8, 9, -10};
    unsigned int i; // indice

    // Incrémentation
    for (i = 0; i <= NB_CASES - 1; i++)
    {
        if (tab[i] < 0)
        {
            tab[i]++;
            cout << i <<tab[i];
        }
    }


    return 0;
}