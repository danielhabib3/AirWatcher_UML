/*************************************************************************
                           Agency  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Agency> (fichier Agency.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Agency.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Agency::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
Agency & Agency::operator = ( const Agency & unAgency )
// Algorithme :
//
{
    return *this;
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Agency::Agency ( const Agency & unAgency )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Agency>" << endl;
#endif
} //----- Fin de Agency (constructeur de copie)


Agency::Agency ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Agency>" << endl;
#endif
} //----- Fin de Agency


Agency::~Agency ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Agency>" << endl;
#endif
} //----- Fin de ~Agency


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

