/**
 * Project Untitled
 */


/**
 * Bike implementation
 */


#include "Bike.h"

Bike::Bike(std::string bikeId, std::string productName)
    : bikeId(bikeId), productName(productName) {}

std::string Bike::getBikeId() {
    return bikeId;
}

std::string Bike::getProductName() {
    return productName;
}