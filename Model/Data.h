/*************************************************************************
                           Data  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Data> (fichier Data.h) ----------------
#if ! defined ( DATA_H )
#define DATA_H

//--------------------------------------------------- Interfaces utilisées
#include "Sensor.h"
#include "Cleaner.h"
#include "Provider.h"
#include "Measurement.h"
#include "PrivateIndividual.h"
#include <vector>

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Data>
//
//
//------------------------------------------------------------------------

class Data
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
    Data & operator = ( const Data & unData );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Data ( const Data & unData );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Data ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Data ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//-------------------------------------------- GETTERS - SETTERS
    vector<Sensor*> getAllSensors ( ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    vector<Cleaner*> getAllCleaners ( ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    vector<Measurement*> getAllMeasurements ( ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    vector<Provider*> getAllProviders ( ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    vector<PrivateIndividual*> getAllPrivateIndividuals ( ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //
    
    void setAllSensors ( vector<Sensor*> sensors );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void setAllCleaners ( vector<Cleaner*> cleaners );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void setAllMeasurements ( vector<Measurement*> measurements );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void setAllProviders ( vector<Provider*> providers );
    // Mode d'emploi :
    //
    // Contrat :
    //

    void setAllPrivateIndividuals ( vector<PrivateIndividual*> privateIndividuals );
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
    vector<Sensor*> allSensors;
    vector<Cleaner*> allCleaners;
    vector<Measurement*> allMeasurements;
    vector<Provider*> allProviders;
    vector<PrivateIndividual*> allPrivateIndividuals;

};

//-------------------------------- Autres définitions dépendantes de <Data>

#endif // DATA_H

