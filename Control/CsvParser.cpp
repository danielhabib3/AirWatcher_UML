/*************************************************************************
                           CsvParser  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <CsvParser> (fichier CsvParser.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CsvParser.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type CsvParser::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
CsvParser & CsvParser::operator = ( const CsvParser & unCsvParser )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
CsvParser::CsvParser ( const CsvParser & unCsvParser )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <CsvParser>" << endl;
#endif
} //----- Fin de CsvParser (constructeur de copie)


CsvParser::CsvParser ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <CsvParser>" << endl;
#endif
} //----- Fin de CsvParser


CsvParser::~CsvParser ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CsvParser>" << endl;
#endif
} //----- Fin de ~CsvParser


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

