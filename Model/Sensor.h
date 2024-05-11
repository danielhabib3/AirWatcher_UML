#if !defined(SENSOR_H)
#define SENSOR_H

#include <string>
#include <cstring>
#include <cmath>
#include "Data.h"

using namespace std;

class PrivateIndividual;
class Data;

class Sensor
{

public:
    Sensor(const Sensor &unSensor);
    Sensor(string unSensorId, double uneLatitude, double uneLongitude);
    virtual ~Sensor();

    string getSensorId() const;
    double getLatitude() const;
    double getLongitude() const;

    /**
     * @brief calculates the distance in km between a point given by its latitude and longitude and
     * the position of the sensor
     *
     * @param latitude
     * @param longitude
     * @return double the result in km
     */
    double calculateDistance(double latitude, double longitude) const;

    /**
     * @brief Get the Private Individual Link To The Sensor object
     *
     * @param data the data to check if a private individual is linked to the sensor
     * @return PrivateIndividual* the private individual linked to the sensor or null if no private individual is linked to the sensor
     */
    PrivateIndividual* getPrivateIndividualLinkToTheSensor(Data *data) const;

private:
    string sensorId;
    double latitude;
    double longitude;
};

#endif // SENSOR_H
