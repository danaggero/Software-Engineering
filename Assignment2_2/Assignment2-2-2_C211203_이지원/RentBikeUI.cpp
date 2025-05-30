/**
 * Project Untitled
 */

/**
 * User Interface::RentBikeUI implementation
 */


#include "RentBikeUI.h"
#include "RentBike.h"
#include <fstream>
#include <iostream>

extern std::ifstream in_fp;

void RentBikeUI::startInterface() {
    //std::cout << "RentBikeUI::startInterface() 실행됨" << std::endl;
}

void RentBikeUI::rentBike(RentBike* control) {
    std::string bikeId;
    in_fp >> bikeId;
    control->rent(bikeId);
}
