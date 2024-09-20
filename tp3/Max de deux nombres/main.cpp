/*
 Programme : Max deux nombres
 But : Donne le nombre le plus grand entre deux nombres définie par l'utilisateur
 Date de dernière modification : 19 septembre 2024
 Auteur : A. Marquet
 Remarques :
*/

#include <iostream>
using namespace std;

int main(void)
{
    // VARIABLES
    double nbr1;
    double nbr2;
    double max;
    bool egaux;

    // SAISIR NOMBRE
    cout << "Entrer nombre 1: ";
    cin >> nbr1;
    cout << "Entrer nombre 2: ";
    cin >> nbr2;

    // DETERMINER MAX
    if (nbr1 < nbr2)
    {
        max = nbr2;
        egaux = false;
    }
    else if (nbr1 > nbr2)
    {
        max = nbr1;
        egaux = false;
    }
    else
    {
        max = 0;
        egaux = true;
    }

    // AFFICHER MAX

    if (egaux == true)
    {
        cout << nbr1 << " = " << nbr2;
    }
    else
    {
        cout << "le max est : " << max;
    }

    return 0;
}