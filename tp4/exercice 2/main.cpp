/*
 Programme : Saisie et vérification d'une note avec un message d'erreur
 But : Vérifier si la note saisie par l'utilisateur est comprise et 0 et 20, redemande si la note n'est pas comprise entre 0 et 20
 Date de dernière modification : 26/09/2024
 Auteur : A. Marquet
 Remarques :
*/


#include <iostream>
using namespace std;


int main(void) 
{
    // Variables
    double note; // note renseignée par l'utilisateur

    // Saisir une note
    cout << "Entrez une note comprise entre 0 et 20 :";


    // Vérification note
    while (true)
    {
        cin >> note;

        if ( note >= 0 && note <= 20)
        {
            break;
        }

        cout << "La valeur doit etre comprise entre 0 et 20. Recommencez :";

    }

    // Afficher
    cout << "merci";

    return 0;
}