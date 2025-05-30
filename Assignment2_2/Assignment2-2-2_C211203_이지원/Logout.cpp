/**
 * Project Untitled
 */



/**
 * Control::Logout implementation
 */


#include "Logout.h"

Logout::Logout(Member*& currentMember)
    : currentMember(currentMember)
{
    logoutUI = new LogoutUI();
    logoutUI->startInterface();
}

void Logout::logout() {
    currentMember = nullptr;

}

LogoutUI* Logout::getLogoutUI() {
    return logoutUI;
}

Member* Logout::getCurrentMember() {
    return currentMember;
}