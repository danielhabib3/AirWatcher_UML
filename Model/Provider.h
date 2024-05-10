/*************************************************************************
                           Provider  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Provider> (fichier Provider.h) ----------------
#if ! defined ( PROVIDER_H )
#define PROVIDER_H

//--------------------------------------------------- Interfaces utilisées
#include "User.h"
#include "Cleaner.h"
#include <string>

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Provider>
//
//
//------------------------------------------------------------------------

class Provider : public User
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
    Provider & operator = ( const Provider & unProvider );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Provider ( const Provider & unProvider );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Provider ( string unProviderId, Cleaner* unCleaner );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Provider ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//-------------------------------------------- GETTERS - SETTERS
    Cleaner* getCleaner (  ) const;
    // Mode d'emploi :
    //
    // Contrat :
    //

    string getProviderId (  ) const;
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
    string providerId;
    Cleaner* cleaner;

};

//-------------------------------- Autres définitions dépendantes de <Provider>

#endif // PROVIDER_H

