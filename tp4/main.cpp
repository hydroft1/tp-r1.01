/*
 Programme : Moyenne d'un module V2
 But : Calcul la moyenne des notes saisies par l'utilisateur
 Date de dernière modification : 03/10/2024
 Auteur : A. Marquet
 Remarques : affiche un message d'erreur, la saisie s'arrête lorsque l'utilisateur saisie 999
*/

#include <iostream>
using namespace std;

int main(void)
{
    // Variables - Constantes
    const unsigned short int VALEUR_FIN = 999; // valeur de la fin de saisie
    float moyenne; // moyenne des notes saisies par l'utilisateur
    float note; // note saisie par l'utilisateur
    unsigned short int nbrNotes; // nombre total de notes renseignées par l'utilisateur
    float somme; // somme des notes saisies par l'utilisateur

    // Initialisations
    nbrNotes = 0;
    somme = 0;

    // Entrer et vérification des notes
    while (true)
    {
        cout << "Entrez une note :";
        cin >> note;

        if (note == VALEUR_FIN)
        {
            break;
        }

        if (note >= 0 && note <= 20)
        {
            nbrNotes++;
            somme += note;
        }
        else
        {
            cout << "Valeur incorrecte, une note doit etre comprise entre 0 et 20." << endl;
            
        }

    }

    // Calculer moyenne
    if (nbrNotes > 0)
    {
        moyenne = somme / nbrNotes;
    }

    // Afficher moyenne
    if (nbrNotes > 0)
    {
        cout << "La moyenne des notes est de " << moyenne << endl;
    }
    else
    {
        cout << "Moyenne non calculable" << endl;
    }

    return 0;
}