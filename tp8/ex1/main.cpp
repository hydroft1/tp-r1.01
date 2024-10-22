/*
Programme : AffichePrixReduit
But : Afficher le prix réduit d'un article à partir de son prix de base et d'une réduction
Date : 22/10
Auteur : Alexandre M.

*/

#include <iostream>
using namespace std;

// La déclaration du sous programme
void prixReduit(float prixDepart, unsigned short int pourcentage);
// BUT : Afficher à l'écran le prix réduit à partir d'un prix de départ et d'un pourcentage de réduction 


int main (void)
{
    // Variables
    float prixDep;
    unsigned short int reduction;

    // SAISIE 
    cout << "Entrez le prix de depart : ";
    cin >> prixDep;

    cout << "Entrez la reduction : ";
    cin >> reduction;

    // Appel d'un sous programme
    prixReduit(prixDep, reduction);

    return 0;
}

// Définition du sous-programme
void prixReduit (float prixDep, unsigned short int pourcentage)
{
    cout << "Le prix final est : "  << (prixDep * (1-static_cast<float>(pourcentage)/100)) << endl;
}
