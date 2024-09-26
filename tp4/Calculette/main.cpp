/*
 Programme : Calculette
 But : Calculer l'opération entre deux valeurs
 Date de dernière modification : 21/10/2021
 Auteur : A. Marquet
 Remarques :
*/

#include <iostream>
using namespace std;

int main(void)
{
    // Variables
    double val1;
    double val2;
    char oper;

    // Saisir opérateur
    cout << "Entrez un opérateur (+, -, *, /) : ";
    cin >> oper;
    // Vérifier opérateur
    if (oper == '+' || oper == '-' || oper == '*' || oper == '/')
    {
        // Saisir les valeurs
        cout << "Entrez la première valeur : ";
        cin >> val1;
        cout << "Entrez la deuxième valeur : ";
        cin >> val2;

        // Calcul
        double resultat;
        switch (oper)
        {
        case '+':
            resultat = val1 + val2;
            break;
        case '-':
            resultat = val1 - val2;
            break;
        case '*':
            resultat = val1 * val2;
            break;
        case '/':
            if (val2 != 0)
            {
                resultat = val1 / val2;
            }
            else
            {
                cout << "Erreur : Division par zéro !" << endl;
                return 1;
            }
            break;
        }

        // Afficher le résultat
        cout << "Le résultat est : " << resultat << endl;
    }
    else
    {
        cout << "Opérateur invalide !" << endl;
    }

    return 0;
}