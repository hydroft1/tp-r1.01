/*
 Programme : Signe d'un nombre
 But : Trouver le signe d'un nombre que l'utilisateur a saisi
 Date de dernière modification : 19 septembre 2024
 Auteur : A. Marquet
 Remarques :Dans cette version on utilise une variable pour définir le signe du nombre puis ensuite on l afffiche
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double nbr; // le nombre dont on cherche le signe
    string signe; // le signe de nbr. Valeurs possibles : "positif", "negatif" ou "nul"

    // Saisir nbr
    cout << "Entrer un nombre :  ";
    cin >> nbr;

    // DETERMINER SIGNE

    if (nbr > 0)
    {
        signe = "positif";
    }
    else
    {
        signe = (nbr<0 ? "negatif" : "nul");
    }

    // AFFICHER LE SIGNE
    cout << "Ce nombre est " << signe;

     return 0;
}