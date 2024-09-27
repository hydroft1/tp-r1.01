/*
 Programme :Afficher des lignes composées d'étoiles 
 But : Affiche n lignes d'étoiles renseignées par l'utilisateur
 Date de dernière modification : 27/09/2024
 Auteur : A. Marquet
 Remarques :
*/

#include <iostream>
using namespace std;

int main(void)
{
    // Variables
    unsigned int nbLignes; // nombre de lignes affichant 5 étoiles
    unsigned int i; // indice

    // Saisir le nombre de lignes
    cout << "Entrez le nombre de lignes :";
    cin >> nbLignes;

    // Afficher le nombre de lignes
    for (i = 0; i < nbLignes; i++)
    {
        cout << "*****" << endl;
    }

    return 0;
}