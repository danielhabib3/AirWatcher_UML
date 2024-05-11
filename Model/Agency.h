#if !defined(AGENCY_H)
#define AGENCY_H

#include "User.h"

class Agency : public User
{
public:
    Agency &operator=(const Agency &unAgency);
    Agency(const Agency &unAgency);

    Agency();

    virtual ~Agency();

protected:
};

#endif // AGENCY_H
