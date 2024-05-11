#if ! defined ( SENSOR_H )
#define SENSOR_H

#include <string>
#include <cstring>

using namespace std;

class Sensor
{

public:
    Sensor ( const Sensor & unSensor );
    Sensor ( string unSensorId, double uneLatitude, double uneLongitude );
    virtual ~Sensor ( );
    
    string getSensorId (  ) const;
    double getLatitude (  ) const;
    double getLongitude (  ) const;
    
private:
    string sensorId;
    double latitude;
    double longitude;

};


#endif // SENSOR_H

