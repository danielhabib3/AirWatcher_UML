/*************************************************************************
                           Cleaner  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Cleaner> (fichier Cleaner.h) ----------------
#if ! defined ( CLEANER_H )
#define CLEANER_H

//--------------------------------------------------- Interfaces utilisées
#include <sstream>
#include <ctime>
using namespace std;

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Cleaner>
//
//
//------------------------------------------------------------------------

class Cleaner
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    Cleaner & operator = ( const Cleaner & unCleaner );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Cleaner ( const Cleaner & unCleaner );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Cleaner ( string unCleanerId, double uneLatitude, double uneLongitude, string start, string stop );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Cleaner ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//-------------------------------------------- GETTERS - SETTERS
    string getCleanerId (  ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    double getLatitude (  ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    double getLongitude (  ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    tm* getTimeStart (  ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    tm* getTimeStop (  ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

private:
//----------------------------------------------------- Méthodes privées

//----------------------------------------------------- Attributs privés
    string cleanerId;
    double latitude;
    double longitude;
    tm* timeStart;
    tm* timeStop;
    /*
    struct tm {
        int tm_sec;   // seconds of minutes from 0 to 61
        int tm_min;   // minutes of hour from 0 to 59
        int tm_hour;  // hours of day from 0 to 24
        int tm_mday;  // day of month from 1 to 31
        int tm_mon;   // month of year from 0 to 11
        int tm_year;  // year since 1900
        int tm_wday;  // days since sunday
        int tm_yday;  // days since January 1st
        int tm_isdst; // hours of daylight savings time
    }
    */

};

//-------------------------------- Autres définitions dépendantes de <Cleaner>

#endif // CLEANER_H

