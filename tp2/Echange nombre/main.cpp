/*
 Programme : Echange de deux nombres
 But : Echanger deux nombres dans deux variables différentes
 Date de dernière modification : 11 septembre 2024
 Auteur : A. Marquet
 Remarques :
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double nombre1;
    double nombre2;
    double copieNombre; // variable intermédiaire

    // SAISIR LES DEUX NOMBRES
    cout << "Saisir le 1er numero a echanger :  ";
    cin >> nombre1;
    cout << "Saisir le 2eme numero a echanger :  ";
    cin >> nombre2;

    // ECHANGE DES VALEURS
    copieNombre = nombre1;
    nombre1 = nombre2;
    nombre2 = copieNombre;

    // Afficher le résultat
    cout << "Apres Echange:" << endl;
    cout << " - Le nombre 1 vaut " << nombre1 << endl;
    cout << " - Le nombre 2 vaut " << nombre2 << endl;

    return 0;
}