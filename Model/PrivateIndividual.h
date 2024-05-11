#if ! defined ( PRIVATEINDIVIDUAL_H )
#define PRIVATEINDIVIDUAL_H

#include "User.h"
#include "Sensor.h"

class PrivateIndividual : public User
{

public:

    PrivateIndividual ( const PrivateIndividual & unPrivateIndividual );
    PrivateIndividual ( string unPrivateIndividualId, Sensor* unSensor );
    virtual ~PrivateIndividual ( );
    
    Sensor* getSensor (  ) const;
    string getPrivateIndividualId (  ) const;
    


private:
    string privateIndividualId;
    Sensor* sensor;

};

#endif // PRIVATEINDIVIDUAL_H

