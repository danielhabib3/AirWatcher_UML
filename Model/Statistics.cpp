/*************************************************************************
                           Statistics  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Statistics> (fichier Statistics.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Statistics.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Statistics::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
Statistics & Statistics::operator = ( const Statistics & unStatistics )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Statistics::Statistics ( const Statistics & unStatistics )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Statistics>" << endl;
#endif
} //----- Fin de Statistics (constructeur de copie)


Statistics::Statistics ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Statistics>" << endl;
#endif
} //----- Fin de Statistics


Statistics::~Statistics ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Statistics>" << endl;
#endif
} //----- Fin de ~Statistics


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

