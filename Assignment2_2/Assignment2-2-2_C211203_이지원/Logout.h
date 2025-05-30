/**
 * Project Untitled
 */


#ifndef LOGOUT_H
#define LOGOUT_H

#include "LogoutUI.h"
#include "Member.h"

class LogoutUI;

class Logout {
private:
    Member*& currentMember;
    LogoutUI* logoutUI;

public:
    Logout(Member*& currentMember);
    void logout();
    LogoutUI* getLogoutUI();
    Member* getCurrentMember();
};
#endif //_CONTROL::LOGOUT_H