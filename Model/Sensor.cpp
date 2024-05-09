/*************************************************************************
                           Sensor  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Sensor> (fichier Sensor.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Sensor.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Sensor::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
Sensor & Sensor::operator = ( const Sensor & unSensor )
// Algorithme :
//
{
    return *this;
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Sensor::Sensor ( const Sensor & unSensor )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Sensor>" << endl;
#endif
} //----- Fin de Sensor (constructeur de copie)


Sensor::Sensor ( string unSensorId, double uneLatitude, double uneLongitude ) : sensorId(unSensorId), latitude(uneLatitude), longitude(uneLongitude)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Sensor>" << endl;
#endif
} //----- Fin de Sensor


Sensor::~Sensor ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Sensor>" << endl;
#endif
} //----- Fin de ~Sensor

//-------------------------------------------- GETTERS - SETTERS
string Sensor::getSensorId ( ) const
// Algorithme :
//
{
    return sensorId;
} //----- Fin de Méthode

double Sensor::getLatitude ( ) const
// Algorithme :
//
{
    return latitude;
} //----- Fin de Méthode

double Sensor::getLongitude ( ) const
// Algorithme :
//
{
    return longitude;
} //----- Fin de Méthode


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

