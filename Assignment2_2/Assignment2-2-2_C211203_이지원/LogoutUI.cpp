/**
 * Project Untitled
 */


/**
 * LogoutUI implementation
 */



#include "LogoutUI.h"
#include "Logout.h"
#include <fstream>
#include <iostream>

extern std::ofstream out_fp;

void LogoutUI::startInterface() {
    //std::cout << "LogoutUI::startInterface() 실행됨" << std::endl;
}

void LogoutUI::memberLogout(Logout* logout) {
    Member* user = logout->getCurrentMember(); 
    std::string id = user->getId();

    logout->logout();

    out_fp << "2.2. 로그아웃\n";
    out_fp << "> " << id << "\n\n";
}