/*

*/

#include <iostream>
using namespace std;

// DECLARATION DE LA FONCTION
double valAbsolue(double nombre);

// Programme 
int main(void)
{
    // VARIABLES
    double nombre; // le nombre dont on cherche le signe

    // DEBUT DE L'ALGORITHME
    cout << "Entrez un nombre : ";
    cin >> nombre;

    // appel sous programme
    nombre = valAbsolue(nombre);
    cout << "La valeur absolue du nombre est : " << nombre << endl;

    // FIN DE L'ALGORITHME

    return 0;
}


// définition du sous programme
double valAbsolue(double nombre)
{
    // Si le nombre est négatif, on le rend positif
    if (nombre < 0)
    {
        nombre = -nombre;
    }

    // On retourne la valeur absolue du nombre
    return nombre;
}

