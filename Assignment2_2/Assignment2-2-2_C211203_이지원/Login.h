/**
 * Project Untitled
 */


#ifndef LOGIN_H
#define LOGIN_H

#include "Member.h"
#include "LoginUI.h"
#include "MemberCollection.h"

class Login {

private:
    MemberCollection* memberCollection;

    Member*& currentMember;
    LoginUI* loginUI;

public:
    Login(MemberCollection* memberCollection, Member*& currentMember);
    Member* login(const std::string& id, const std::string& password);
    LoginUI* getLoginUI();

};

#endif