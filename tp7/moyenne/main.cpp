/*
Nom : Moyenne des valeurs d'un tableau
But : Fairela moyenne des valeurs d'un tableau
Date : 17/10
Auteur : Alexandre M.
*/

#include <iostream>
using namespace std;

int main(void)
{
    // Variables
    const unsigned long int NB_CASES = 10; // taille du tableau
    float tab[NB_CASES] = {9, -15, 10, 45, -78, 32, 7, 8, 9, -10}; // valeur du tableau
    unsigned long int indice;
    double somme = 0;
    double moyenne;


    // Calcul de la somme
    for (indice = 0; indice < NB_CASES - 1; indice++)
    {
        somme += tab[indice];
    }

    // Calcul de la moyenne
    moyenne = somme / NB_CASES;

    
    
    return 0;
}