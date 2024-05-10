/*************************************************************************
                           PrivateIndividual  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <PrivateIndividual> (fichier PrivateIndividual.h) ----------------
#if ! defined ( PRIVATEINDIVIDUAL_H )
#define PRIVATEINDIVIDUAL_H

//--------------------------------------------------- Interfaces utilisées
#include "User.h"
#include "Sensor.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <PrivateIndividual>
//
//
//------------------------------------------------------------------------

class PrivateIndividual : public User
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
    PrivateIndividual & operator = ( const PrivateIndividual & unPrivateIndividual );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    PrivateIndividual ( const PrivateIndividual & unPrivateIndividual );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    PrivateIndividual ( string unPrivateIndividualId, Sensor* unSensor );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~PrivateIndividual ( );
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

    string getPrivateIndividualId (  ) const;
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
    string privateIndividualId;
    Sensor* sensor;

};

//-------------------------------- Autres définitions dépendantes de <PrivateIndividual>

#endif // PRIVATEINDIVIDUAL_H

