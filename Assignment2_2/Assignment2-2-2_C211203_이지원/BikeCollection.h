#ifndef BIKECOLLECTION_H
#define BIKECOLLECTION_H

#include "Bike.h"
#include <string>


class BikeCollection {
private:
    Bike* bikeList[50];
    int bikeCount;

public:
    BikeCollection();
    void addBike(const std::string& bikeId, const std::string& productName);

    Bike* findBikeById(const std::string& bikeId);
    Bike** getBikeList();   // 전체 배열 반환
    int getBikeCount();     // 현재 등록된 자전거 수
};

#endif

