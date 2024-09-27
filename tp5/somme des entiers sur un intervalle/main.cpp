/*
 Programme : Somme des entiers sur un intervalle
 But : Calcul la somme des entiers compris entre 1 et une borne donnée
 Date de dernière modification : 27/09/2024
 Auteur : A. Marquet
 Remarques :
*/

#include <iostream>
using namespace std;

int main(void)
{
    // Variables
    unsigned int borne; // borne d'arrêt de l'intervalle
    unsigned int somme; // somme comprise des entiers entre 1 et borne
    unsigned int i; // indice

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