/*

*/


int main(void)
{
    // Variables
    enum Mois {janvier = 1, fevrier = 2, mars = 3, avril = 4, mai = 5, juin = 6, juillet = 7, aout = 8, septembre = 9, octobre = 10, novembre = 11, decembre = 12};
    struct Date
    {
    unsigned short int jours; // jours de l'année
    Mois mois; // mois de l'année
    unsigned short int annee; // année
    };
    Date date1, date2;
    bool egal; // égalité des dates
    Date dateAncienne; // date la plus ancienne

    // Initialisation
    date1.jours = 10;
    date1.mois = aout;
    date1.annee = 2024;

    date2.jours = 11;
    date2.mois = juillet;
    date2.annee = 2024;

    // Comparer les années
    egal = false;

    if (date1.annee > date2.annee)
    {
        dateAncienne = date2; 
    }
    else if (date2.annee > date1.annee)
    {
        dateAncienne = date1;
    }
    else {
        // Comparer les mois
        if (date1.mois > date2.mois)
        {
            dateAncienne = date2;
        }
        else if (date2.mois > date1.mois)
        {
            dateAncienne = date1;        
        }
        else {
            // Comparer les jours
            if (date1.jours > date2.jours)
            {
                dateAncienne = date2;
            }
            else if (date2.jours > date1.jours)
            {
                dateAncienne = date1;
            }
            else {
                egal = true;
            }
        }
    }

    // Afficher

    return 0;
}