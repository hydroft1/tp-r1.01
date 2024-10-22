/*
Programme : Afficher la position de la 1ere voyelle
But : Affiche la première voyelle d'une chaine de caractères
Date : 17/10
Auteur : Alexandre M.
*/

#include <iostream>
using namespace std;

int main(void)
{
    // Variables
    unsigned long int tailleChaine; // taille de la chaine
    string chaineChar; // chaine de caractères
    unsigned long int indice = 0; // indice de la boucle while
    unsigned long int indiceVoy; // indice de la chaine de caractères
    bool voyTrouve; // Boooléen si la voyelle a été trouvé dans la chaine de caractères

    // Initialisation
    voyTrouve = false;
    indice = 0;

    // Saisie
    cout << "Entrez une chaine de caractères : ";
    cin >> chaineChar;

    tailleChaine = chaineChar.size();
    cout << tailleChaine << endl;


    // Chercher l'indice de la 1ere voyelle
    while (true)
    {
        if (indice >= tailleChaine)
        {
            break;
        }

        if (chaineChar[indice] == 'a' || chaineChar[indice] == 'e' || chaineChar[indice] == 'i' || chaineChar[indice] == 'o' || chaineChar[indice] == 'u' || chaineChar[indice] == 'y')
        {
            voyTrouve = true;
            indiceVoy = indice;
            break;
        }

        indice++;
    }

    // Afficher l'indice de la voyelle trouvée
    if (voyTrouve)
    {
        cout << "La premiere voyelle est en position : " << indiceVoy << endl;
    }
    else
    {
        cout << "Aucune voyelle n'a ete trouvee" << endl;
    }

    return 0;
}
