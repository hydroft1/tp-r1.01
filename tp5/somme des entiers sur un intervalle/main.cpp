/*
 Programme : Somme des entiers sur un intervalle
 But : Calcul la somme des entiers compris entre 1 et une borne donnée
 Date de dernière modification : 26/09/2024
 Auteur : A. Marquet
 Remarques :
*/

#include <iostream>
using namespace std;

int main(void)
{
    // Variables
    unsigned int borne; // 
    unsigned int somme; //
    unsigned int i; // 

    // Saisir borne
    cout << "Entrez la borne : ";
    cin >> borne;

    // Calculer la somme
    somme = 0;

    for (i = 1; i <= borne; i = i + 1)
    {
        somme = somme + i;
    }

    // Afficher la somme
    cout << somme;

    return 0;
}