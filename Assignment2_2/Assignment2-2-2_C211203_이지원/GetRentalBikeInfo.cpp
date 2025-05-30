/**
 * Project Untitled
 */


/**
 * Control::GetRentalBikeInfo implementation
 */

#include "GetRentalBikeInfo.h"
#include "User.h"
#include "MemberCollection.h"
#include <fstream>

extern std::ofstream out_fp;

GetRentalBikeInfo::GetRentalBikeInfo(Member* currentMember) : currentMember(currentMember) {

    ui = new GetRentalBikeInfoUI();
    ui->startInterface();
}

void GetRentalBikeInfo::showRentalInfo() {
    User* user = dynamic_cast<User*>(currentMember);
    if (user) {
        out_fp << "5.1. 자전거 대여 리스트\n";
        user->listRental();
    }
}

GetRentalBikeInfoUI* GetRentalBikeInfo::getUI() {
    return ui;
}
