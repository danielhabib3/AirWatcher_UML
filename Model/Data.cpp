/*************************************************************************
                           Data  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Data> (fichier Data.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Data.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Data::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
Data & Data::operator = ( const Data & unData )
// Algorithme :
//
{
    return *this;
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Data::Data ( const Data & unData )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Data>" << endl;
#endif
} //----- Fin de Data (constructeur de copie)


Data::Data ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Data>" << endl;
#endif
} //----- Fin de Data


Data::~Data ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Data>" << endl;
#endif
} //----- Fin de ~Data

void Data::setAllSensors ( vector<Sensor*> sensors )
// Algorithme :
//
{
    allSensors = sensors;
} //----- Fin de Méthode

void Data::setAllCleaners ( vector<Cleaner*> cleaners )
// Algorithme :
//
{
    allCleaners = cleaners;
} //----- Fin de Méthode

void Data::setAllMeasurements ( vector<Measurement*> measurements )
// Algorithme :
//
{
    allMeasurements = measurements;
} //----- Fin de Méthode

void Data::setAllProviders ( vector<Provider*> providers )
// Algorithme :
//
{
    allProviders = providers;
} //----- Fin de Méthode

void Data::setAllPrivateIndividuals ( vector<PrivateIndividual*> privateIndividuals )
// Algorithme :
//
{
    allPrivateIndividuals = privateIndividuals;
} //----- Fin de Méthode

vector<Sensor*> Data::getAllSensors ( ) const
// Algorithme :
//
{
    return allSensors;
} //----- Fin de Méthode

vector<Cleaner*> Data::getAllCleaners ( ) const
// Algorithme :
//
{
    return allCleaners;
} //----- Fin de Méthode


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

