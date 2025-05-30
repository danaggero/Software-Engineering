/**
 * Project Untitled
 */



/**
 * User Interface::AddBikeUI implementation
 */

#include "AddBikeUI.h"
#include "AddBike.h"
#include <iostream>
#include <fstream>

extern std::ifstream in_fp;
extern std::ofstream out_fp;

void AddBikeUI::startInterface() {
    //std::cout << "AddBikeUI::startInterface() 실행" << std::endl;
}

void AddBikeUI::registerBike(AddBike* addBike) {
    std::string bikeId, productName;
    in_fp >> bikeId >> productName;

    addBike->addBike(bikeId, productName);

    out_fp << "3.1. 자전거 등록\n";
    out_fp << "> " << bikeId << " " << productName << "\n\n";
}