/**
 * Project Untitled
 */


#include "Login.h"
#include <iostream>
#include "Member.h"
#include "MemberCollection.h"

Login::Login(MemberCollection* memberCollection, Member*& currentMember) : memberCollection(memberCollection), currentMember(currentMember) {
    // LoginUI 객체 생성
    loginUI = new LoginUI;
    loginUI->startInterface();  
}

Member* Login::login(const std::string& id, const std::string& password) {
    currentMember = memberCollection->validateLogin(id, password);
    return currentMember;
}

LoginUI* Login::getLoginUI() {
    return loginUI;
}