#if !defined(VIEW_H)
#define VIEW_H

#include <vector>
#include "Controller.h"

class View
{

public:
    View &operator=(const View &unView);
    View(const View &unView);
    View();
    virtual ~View();

    /**
     * @brief cette methode permet de recuperer les parametres necessaires 
     * pour la methode getMeanAirQualityByZoneByPeriod en interagissant avec l'utilisateur dans le terminal
     * @return un vecteur de string contenant les parametres necessaires
     * L'ordre des parametres est le suivant:
     * - data
     * - start
     * - end
     * - lat
     * - lon
     * - radius
    */
    vector<string> getParametersOfGetMeanAirQualityByZoneByPeriod();

    /**
     * @brief cette methode permet de recuperer les parametres necessaires 
     * pour la methode getMeanAirQualityByZoneByPeriod en interagissant avec l'utilisateur dans le terminal
     * @return un vecteur de string contenant les parametres necessaires
     * L'ordre des parametres est le suivant:
     * - data
     * - time
     * - lat
     * - lon
     * - radius
    */
    vector<string> getParametersOfGetMeanAirQualityByZoneByTime();

};

#endif // VIEW_H
