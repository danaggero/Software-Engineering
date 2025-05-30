/**
 * Project Untitled
 */


#ifndef RENTBIKE_H
#define RENTBIKE_H

#include <string>
#include "BikeCollection.h"
#include "Member.h"
#include "RentBikeUI.h"

class RentBike {
private:
    BikeCollection* bikeCollection;
    Member* currentMember;
    RentBikeUI* ui;

public:
    RentBike(BikeCollection* bikeCollection, Member* currentMember);
    void rent(const std::string& bikeId);
    RentBikeUI* getRentBikeUI();
};

#endif
