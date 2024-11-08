#include <iostream>
#include <chrono>  // pour la fonction now() utilisée dans la fonction random()
#include <random>  // pour la fonction random
#include <cstdint> // pour uint64_t

int random (int min, int max)
{
    std::default_random_engine generateur;
    std::uniform_int_distribution<int> distributionNombres;
    unsigned int tempsActuel = static_cast<unsigned int>(std::chrono::steady_clock::now().time_since_epoch().count());
    generateur.seed(tempsActuel);

    return ((distributionNombres(generateur) % (max - min + 1)) + min);
}

using namespace std;

enum Animal {Lievre, Tortue};

// DECLARATION DE LA FONCTION
Animal simule1Course(uint64_t distance);
// BUT : retourne le vainqueur pour une course réalisée sur une distance donnée

int main(void) {
    // VARIABLES
    uint64_t distance = 6;

    // Appel de la fonction pour simuler une course
    Animal vainqueur = simule1Course(distance);

    // Affichage du résultat
    if (vainqueur == Lievre) {
        cout << "Le lièvre a gagné !" << endl;
    } else {
        cout << "La tortue a gagné !" << endl;
    }

    return 0;
}

// DEFINITION DE LA FONCTION
Animal simule1Course(uint64_t distance) {
    uint64_t posTortue = 0;
    Animal vainqueur = Lievre;

    while (true) {
        int valeurDe = random(1, static_cast<int>(distance));

        if (valeurDe == static_cast<int>(distance)) {
            break;
        }

        posTortue++;

        if (posTortue >= distance) {
            vainqueur = Tortue;
            break;
        }
    }

    return vainqueur;
}
