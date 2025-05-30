#include "BikeCollection.h"
#include "Bike.h"

BikeCollection::BikeCollection() : bikeCount(0) {}

void BikeCollection::addBike(const std::string& bikeId, const std::string& productName) {
    if (bikeCount < 50) {
        Bike* newBike = new Bike(bikeId, productName);
        bikeList[bikeCount++] = newBike;
    }
}


Bike* BikeCollection::findBikeById(const std::string& bikeId) {
    for (int i = 0; i < bikeCount; ++i) {
        if (bikeList[i]->getBikeId() == bikeId) {
            return bikeList[i];
        }
    }
    return nullptr;
}

Bike** BikeCollection::getBikeList() {
    return bikeList;
}

int BikeCollection::getBikeCount() {
    return bikeCount;
}