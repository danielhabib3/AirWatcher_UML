/*************************************************************************
                           Agency  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Agency> (fichier Agency.h) ----------------
#if ! defined ( AGENCY_H )
#define AGENCY_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Agency>
//
//
//------------------------------------------------------------------------

class Agency : public User
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
    Agency & operator = ( const Agency & unAgency );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Agency ( const Agency & unAgency );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Agency ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Agency ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <Agency>

#endif // AGENCY_H

