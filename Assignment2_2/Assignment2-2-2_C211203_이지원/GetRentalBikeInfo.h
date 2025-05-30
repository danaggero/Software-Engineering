/**
 * Project Untitled
 */

#ifndef GETRENTALBIKEINFO_H
#define GETRENTALBIKEINFO_H

#include "GetRentalBikeInfoUI.h"
#include "MemberCollection.h"
#include "Member.h"

class GetRentalBikeInfo {
private:
    Member* currentMember;
    GetRentalBikeInfoUI* ui;

public:
    GetRentalBikeInfo(Member* currentMember);
    void showRentalInfo();
    GetRentalBikeInfoUI* getUI();
};
#endif
