/**
 * Project Untitled
 */


#ifndef _USER_H
#define _USER_H

#include "Member.h"
#include "Bike.h"

class User : public Member {
private:
    std::string phoneNumber;
    Bike* rentalList[50];
    int rentalCount;

public:
    User();
    User(const std::string& id, const std::string& password, const std::string& phoneNumber);
    virtual ~User();

    void userRentBike(Bike* bike);

    void listRental();
    void getUserInfo();

};

#endif
