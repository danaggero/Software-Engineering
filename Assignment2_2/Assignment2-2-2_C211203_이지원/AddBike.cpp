/**
 * Project Untitled
 */


/**
 * Control::AddBike implementation
 */


#include "AddBike.h"
#include "AddBikeUI.h"
#include "BikeCollection.h"

AddBike::AddBike(BikeCollection* bikeCollection) : bikeCollection(bikeCollection) {
    addBikeUI = new AddBikeUI();
    addBikeUI->startInterface();
}

void AddBike::addBike(const std::string& bikeId, const std::string& productName) {
    bikeCollection->addBike(bikeId, productName);
}

AddBikeUI* AddBike::getAddBikeUI() {
    return addBikeUI;
}