/**
 * Project Untitled
 */


/**
 * Control::RentBike implementation
 */

#include "RentBike.h"
#include "User.h"
#include <fstream>
#include <iostream>

extern std::ofstream out_fp;

RentBike::RentBike(BikeCollection* bikeCollection, Member* currentMember)
    : bikeCollection(bikeCollection), currentMember(currentMember) {
    ui = new RentBikeUI();
    ui->startInterface();
}

void RentBike::rent(const std::string& bikeId) {
    User* user = dynamic_cast<User*>(currentMember);
    if (!user) {
        out_fp << "4.1. 실패: 일반 사용자만 자전거를 대여할 수 있습니다.\n\n";
        return;
    }

    Bike* bike = bikeCollection->findBikeById(bikeId);
    if (!bike) {
        out_fp << "4.1. 실패: 해당 ID의 자전거를 찾을 수 없습니다.\n\n";
        return;
    }

    user->userRentBike(bike);
    out_fp << "4.1. 자전거 대여\n";
    out_fp << "> " << bike->getBikeId() << " " << bike->getProductName() << "\n\n";
}

RentBikeUI* RentBike::getRentBikeUI() {
    return ui;
}
