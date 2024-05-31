#if !defined(VIEW_H)
#define VIEW_H

#include <vector>
#include "Controller.h"

class View
{

public:
    View(const View &unView);
    View();
    virtual ~View();
    void StartApplication();
    
private:
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

    void DisplayExitMessage();

    /**
     * @brief cette methode permet d'afficher tous les sensors 
    */
    void DisplayAllSensors(vector<Sensor*> sensors);
    Sensor* getChosenSensor(vector<Sensor*> sensors);
    void DisplaySimilarSensors(vector<Sensor*> sensors, Sensor* sensor);
    
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
    vector<string> getParametersOfGetSimilarSensors();

};

#endif // VIEW_H
