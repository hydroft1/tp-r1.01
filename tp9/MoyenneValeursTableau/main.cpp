
#include <iostream>
using namespace std;

// DECLARATION DE LA FONCTION
float moyenneTab (const float tab[], unsigned int tailleTab);


int main(void) {

    // VARIABLES
    const unsigned int TAILLE_TAB = 5;
    float tab[TAILLE_TAB] = {10, 20, 12, 15, 10.8};
    float moyenne;


    // Appel de la fonction
    moyenne = moyenneTab(tab, TAILLE_TAB);

    // Afficher
    cout << "La moyenne des valeurs du tableau est : " << moyenne << endl;

    return 0;
}

// DEFINITION DE LA FONCTION
float moyenneTab (const float tab[], unsigned int tailleTab) {
    float somme = 0;
    for (unsigned int i = 0; i < tailleTab; i++) {
        somme += tab[i];
    }
    return somme / tailleTab;
}