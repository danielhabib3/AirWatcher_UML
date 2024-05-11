using namespace std;
#include <iostream>

#include "Sensor.h"


//-------------------------------------------- Constructeurs - destructeur
Sensor::Sensor ( const Sensor & unSensor )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Sensor>" << endl;
#endif
} 


Sensor::Sensor ( string unSensorId, double uneLatitude, double uneLongitude ) : sensorId(unSensorId), latitude(uneLatitude), longitude(uneLongitude)
{
#ifdef MAP
    cout << "Appel au constructeur de <Sensor>" << endl;
#endif
} 


Sensor::~Sensor ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Sensor>" << endl;
#endif
} 


string Sensor::getSensorId ( ) const
{
    return sensorId;
} 

double Sensor::getLatitude ( ) const
{
    return latitude;
} 

double Sensor::getLongitude ( ) const
{
    return longitude;
} 

