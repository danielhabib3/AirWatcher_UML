using namespace std;
#include <iostream>

#include "Sensor.h"

//-------------------------------------------- Constructeurs - destructeur
Sensor::Sensor(const Sensor &unSensor)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Sensor>" << endl;
#endif
}

Sensor::Sensor(string unSensorId, double uneLatitude, double uneLongitude) : sensorId(unSensorId), latitude(uneLatitude), longitude(uneLongitude)
{
#ifdef MAP
    cout << "Appel au constructeur de <Sensor>" << endl;
#endif
}

Sensor::~Sensor()
{
#ifdef MAP
    cout << "Appel au destructeur de <Sensor>" << endl;
#endif
}

string Sensor::getSensorId() const
{
    return sensorId;
}

double Sensor::getLatitude() const
{
    return latitude;
}

double Sensor::getLongitude() const
{
    return longitude;
}

double Sensor::calculateDistance(double latitude, double longitude) const
{
    double earthRadius = 6371.0;
    double latSensor = this->latitude;
    double longSensor = this->longitude;

    // conversion of lat and long to radians
    double dLat = (latitude - latSensor) * M_PI / 180.0;
    double dLon = (longitude - longSensor) * M_PI / 180.0;
    latSensor = latSensor * M_PI / 180.0;
    latitude = latitude * M_PI / 180.0;

    double a = sin(dLat / 2) * sin(dLat / 2) + sin(dLon / 2) * sin(dLon / 2) * cos(latitude) * cos(longitude);
    double c = 2 * atan2(sqrt(a), sqrt(1 - a));

    return earthRadius * c;
}

PrivateIndividual *Sensor::getPrivateIndividualLinkToTheSensor(Data *data) const
{
    for (PrivateIndividual *privateIndividual : data->getAllPrivateIndividuals())
    {
        if (privateIndividual->getSensor() == this)
        {
            return privateIndividual;
        }
    }
    return nullptr;
}