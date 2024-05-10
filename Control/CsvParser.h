/*************************************************************************
                           CsvParser  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <CsvParser> (fichier CsvParser.h) ----------------
#if ! defined ( CSVPARSER_H )
#define CSVPARSER_H

//--------------------------------------------------- Interfaces utilisées
#include "../Model/Sensor.h"
#include "../Model/Cleaner.h"
#include "../Model/Provider.h"
#include "../Model/Measurement.h"
#include "../Model/PrivateIndividual.h"
#include <fstream>
#include <sstream>
#include <vector>

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <CsvParser>
//
//
//------------------------------------------------------------------------

class CsvParser
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    vector<Sensor*> createSensors ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    vector<Cleaner*> createCleaners ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    vector<Provider*> createProviders ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    vector<Measurement*> createMeasurements ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    vector<PrivateIndividual*> createPrivateIndividuals ( );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    CsvParser & operator = ( const CsvParser & unCsvParser );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    CsvParser ( const CsvParser & unCsvParser );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    CsvParser ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CsvParser ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <CsvParser>

#endif // CSVPARSER_H

