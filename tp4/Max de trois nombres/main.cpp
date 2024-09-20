/*
 Programme : Max de trois nombres
 But : Donne le nombre le plus grand entre trois nombres définie par l'utilisateur
 Date de dernière modification : 20 septembre 2024
 Auteur : A. Marquet
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // Variables
    double nb1;
    double nb2;
    double nb3;
    double max;

    // Saisir nombre
    cout << "Nombre 1 : ";
    cin >> nb1;
    cout << "Nombre 2 : ";
    cin >> nb2;
    cout << "Nombre 3 : ";
    cin >> nb3;

    // Déterminer max entre nb1 et nb2
    if (nb1 > nb2)
    {
        max = nb1;
    }
    else
    {
        max = nb2;
    }

    // Déterminer max entre max et nb3
    if (max < nb3)
    {
        max = nb3;
    }

    // Afficher Max
    cout << "Le plus grand nombre est " << max;

    return 0;
}
