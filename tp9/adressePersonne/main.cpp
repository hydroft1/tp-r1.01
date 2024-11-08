#include <iostream>
using namespace std;

// sous-programme



struct Adresse {
    string numRue;
    string nomRue;
    unsigned int codePostal;
    string ville;
};

struct Personne {
    string nom;
    string prenom;
    Adresse adresse;
};

Adresse afficherAdresse( const Personne& personne);

int main(void)
{
    // Variables
    Personne personne;

    return 0;

    // Appel sous-programme
    Adresse adressePersonne = afficherAdresse(personne);

    cout << "Adresse de " << personne.nom << " " << personne.prenom << ":" << endl;
    cout << adressePersonne.numRue << " " << adressePersonne.nomRue << ", " << adressePersonne.codePostal << " " << adressePersonne.ville << endl;


    return 0;
}

// déclaration sous programme
Adresse afficherAdresse(const Personne personne)
{
    return personne.adresse;
}
