/*
Programme : Calculer le prix réduit
But : Calculer le prix réduit à partir d'un prix de départ et d'une réduction
Date : 22/10
Auteur : Alexandre M.
*/

#include <iostream>
using namespace std;

// Déclaration du sous-programme
void calculerPrixReduit(float prixDep, unsigned short int pourcentage, float & prixReduit);
// BUT : Calculer le prix réduit à partir d'un prix de départ et d'une réduction

int main(void)
{
    // Variables
    float prixDep;
    unsigned short int reduction;
    float prixReduit;

    // SAISIE
    cout << "Entrez le prix de départ : ";
    cin >> prixDep;

    cout << "Entrez la reduction : ";
    cin >> reduction;

    // Appel d'un sous-programme
    calculerPrixReduit(prixDep, reduction, prixReduit);

    // AFFICHER 
    cout << "Le prix réduit est : " << prixReduit << "€" << endl;

    return 0;
}

// Définition du sous-programme
void calculerPrixReduit(float prixDep, unsigned short int pourcentage, float & prixReduit)
{
    prixReduit = prixDep * (1-static_cast<float>(pourcentage)/100);
}
