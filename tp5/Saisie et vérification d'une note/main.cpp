/*
 Programme : Saisie et vérification d'une note
 But : Vérifier si la note saisie par l'utilisateur est comprise et 0 et 20
 Date de dernière modification : 26/09/2024
 Auteur : A. Marquet
 Remarques :
*/


#include <iostream>
using namespace std;

int main(void)
{
    // Variables
    double note;

    // Saisie et vérifie note
    do
    {
        cout << "Entrez une note : ";
        cin >> note;
    } 
    while ( ! (note >= 0 && note <= 20) );

    // Afficher
    cout << "Merci !";

    return 0;
}