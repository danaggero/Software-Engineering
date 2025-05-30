#ifndef ADDBIKE_H
#define ADDBIKE_H

#include <string>
#include "Bike.h"
#include "BikeCollection.h"

class AddBikeUI;

class AddBike {
private:

    AddBikeUI* addBikeUI;
    BikeCollection* bikeCollection;

public:

    AddBike(BikeCollection* bikeCollection);

    void addBike(const std::string& bikeId, const std::string& productName);

    AddBikeUI* getAddBikeUI();
};

#endif