#if !defined(MEASUREMENT_H)
#define MEASUREMENT_H

#include "Sensor.h"
#include <ctime>
#include <sstream>

class Measurement
{

public:
    Measurement &operator=(const Measurement &unMeasurement);

    Measurement(const Measurement &unMeasurement);

    Measurement(Sensor *sensor, string type, double value, string timeString);
    virtual ~Measurement();
    Sensor *getSensor() const;
    string getType() const;
    double getValue() const;
    tm *getTime() const;

private:
    Sensor *sensor;
    string type;
    double value;
    tm *time;
};
#endif // MEASUREMENT_H
