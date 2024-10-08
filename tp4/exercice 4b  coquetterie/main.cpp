/*
 Programme : Somme des entiers sur un intervalle borneInf vers borneSup
 But : Calcul la somme des entiers compris entre borneInf et une borneSup
 Date de dernière modification : 27/09/2024
 Auteur : A. Marquet
 Remarques : Avec coquetterie 
*/

#include <iostream>
using namespace std;

int main(void)
{
    // Variables
    unsigned int borneInf; // borne de départ de l'intervalle
    unsigned int borneSup; // borne d'arrêt de l'intervalle
    unsigned int somme; // somme des entiers entre borneInf à bornSup
    unsigned int valeurIntervalle; // valeur comprise entre borneInf et borneSup

    // Saisir les bornes 
    cout << "Entrez la borne inférieure :";
    cin >> borneInf;
    cout << "Entrez la borne supérieure :";
    cin >> borneSup;

    // Calculer la somme
    somme = borneInf;

    for (valeurIntervalle = borneInf + 1; valeurIntervalle <= borneSup; valeurIntervalle ++)
    {
        somme += valeurIntervalle;
    }

    // Afficher la somme
    cout << somme;

    return 0;
}