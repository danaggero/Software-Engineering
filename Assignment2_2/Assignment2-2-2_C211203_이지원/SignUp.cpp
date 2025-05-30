/**
 * Project Untitled
 */

#include <iostream>
#include "SignUp.h"
#include "User.h"
#include "SignUpUI.h"
#include "MemberCollection.h" 

/**
 * Control::SignUp implementation
 */

// SignUpUI를 호출하는 SignUp 생성자
SignUp::SignUp(MemberCollection* memberCollection) : memberCollection(memberCollection) {

    signUpUI = new SignUpUI;
    signUpUI->startInterface();

}

SignUpUI* SignUp::getSignUpUI() {
    return signUpUI;
}


void SignUp::signUp(const std::string& id, const std::string& password, const std::string& phoneNumber) {

    memberCollection->addMember(id, password, phoneNumber);

}

