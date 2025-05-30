/**
 * Project Untitled
 */


#ifndef _BIKE_H
#define _BIKE_H

#include <string>

class Bike {
private:
    std::string bikeId;
    std::string productName;

public:
    Bike(std::string bikeId, std::string productName);
    std::string getBikeId();
    std::string getProductName();
};

#endif //_BIKE_H