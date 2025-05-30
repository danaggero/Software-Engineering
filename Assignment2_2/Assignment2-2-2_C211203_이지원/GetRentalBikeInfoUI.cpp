/**
 * Project Untitled
 */


/**
 * User Interface::GetRentalBikeInfoUI implementation
 */
#include "GetRentalBikeInfoUI.h"
#include "GetRentalBikeInfo.h"
#include <fstream>
#include <iostream>

extern std::ifstream in_fp;

void GetRentalBikeInfoUI::startInterface() {
    //std::cout << "GetRentalBikeInfoUI::startInterface() 실행됨" << std::endl;
}

void GetRentalBikeInfoUI::showRentalInfo(GetRentalBikeInfo* control) {
    std::string userId;
    in_fp >> userId;
    control->showRentalInfo();
}
