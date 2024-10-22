/*
Programme : Echanger deux entiers
BUT : échanger deux valeurs entières
Date : 22/10
Auteur : Alexandre M.
*/

#include <iostream>
using namespace std;

// Déclaration sous-programme
void echanger(int &val1, int &val2);
// BUT : échanger les valeurs de val1 et val2

int main(void)
{
    int valeur1;
    int valeur2;

    cout << "Entrez la première valeur : ";
    cin >> valeur1;

    cout << "Entrez la deuxième valeur : ";
    cin >> valeur2;
    return 0;

    // Appel du sous-programme
    echanger(valeur1, valeur2);

    // AFFICHER 
    cout << "La première valeur est :" << valeur1 << endl;
    cout << "La deuxième valeur est :" << valeur2 << endl;

    return 0;
}

// Définition sous-programme
void echanger(int &val1, int &val2)
{
    int temp;
    temp = val1;
    val1 = val2;
    val2 = val1;
}
