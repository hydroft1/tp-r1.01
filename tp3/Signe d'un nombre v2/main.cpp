/*
 Programme : Signe d'un nombre version 2
 But : Trouver le signe d'un nombre que l'utilisateur a saisi
 Date de dernière modification : 19 septembre 2024
 Auteur : A. Marquet
 Remarques : Dans cette version on affiche directement le signe du nombre sans utilisation d'une variable
*/

#include <iostream>
using namespace std;

int main(void)
{
    // VARIABLES
    double nombreSaisi; // nombre dont on cherche le signe

    // Saisir le nombre
    cout << "Entrer un nombre :  ";
    cin >> nombreSaisi;

    // Analyser  et afficher le signe d'un nombre

    if (nombreSaisi < 0)
    {
        cout << "Ce nombre est negatif";
    }
    else
    {
        cout << (nombreSaisi > 0 ? "Ce nombre est positif" : "Ce nombre est nul");
    }

    return 0;
}