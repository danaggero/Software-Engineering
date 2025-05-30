/**
 * Project Untitled
 */

#include <algorithm>
#include "User.h"
#include <iostream>
#include <fstream>

extern std::ofstream out_fp;

/**
 * User implementation
 */

// User(일반 회원) 생성자
User::User() : Member(), phoneNumber(""), rentalCount(0) {}

User::User(const std::string& id, const std::string& password, const std::string& phoneNumber)
    : Member(id, password), phoneNumber(phoneNumber), rentalCount(0) {}

User::~User() {}

void User::userRentBike(Bike* bike) {
    if (rentalCount < 50) {
        rentalList[rentalCount++] = bike;
    }
}

void User::listRental() {
    // 복사된 배열로 정렬
    Bike* sortedList[50];
    for (int i = 0; i < rentalCount; ++i) {
        sortedList[i] = rentalList[i];
    }

    std::sort(sortedList, sortedList + rentalCount, [](Bike* a, Bike* b) {
        return a->getBikeId() < b->getBikeId();  // 문자열 비교
        });

    for (int i = 0; i < rentalCount; ++i) {
        out_fp << "> " << sortedList[i]->getBikeId() << " "
            << sortedList[i]->getProductName() << "\n";
    }
    out_fp << "\n";
}

void User::getUserInfo() {
    std::cout << "User ID: " << id << ", Phone: " << phoneNumber << std::endl;
}