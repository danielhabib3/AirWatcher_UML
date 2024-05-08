/*************************************************************************
                           Statistics  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Statistics> (fichier Statistics.h) ----------------
#if ! defined ( STATISTICS_H )
#define STATISTICS_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Statistics>
//
//
//------------------------------------------------------------------------

class Statistics
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
    Statistics & operator = ( const Statistics & unStatistics );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Statistics ( const Statistics & unStatistics );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Statistics ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Statistics ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <Statistics>

#endif // STATISTICS_H

