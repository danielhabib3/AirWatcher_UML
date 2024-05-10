/*************************************************************************
                           Measurement  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Measurement> (fichier Measurement.h) ----------------
#if ! defined ( MEASUREMENT_H )
#define MEASUREMENT_H

//--------------------------------------------------- Interfaces utilisées
#include "Sensor.h"
#include <ctime>
#include <sstream>

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Measurement>
//
//
//------------------------------------------------------------------------

class Measurement
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
    Measurement & operator = ( const Measurement & unMeasurement );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Measurement ( const Measurement & unMeasurement );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Measurement ( Sensor* sensor, string type, double value, string timeString );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Measurement ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//-------------------------------------------- GETTERS - SETTERS
    Sensor* getSensor (  ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    string getType (  ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    double getValue (  ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    tm* getTime (  ) const;
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
    Sensor* sensor;
    string type;
    double value;
    tm* time;

};

//-------------------------------- Autres définitions dépendantes de <Measurement>

#endif // MEASUREMENT_H

