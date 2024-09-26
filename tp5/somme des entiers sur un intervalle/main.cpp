#include <iostream>
using namespace std;

int main(void)
{
    // Variables
    double borne;
    double somme;
    int i;

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