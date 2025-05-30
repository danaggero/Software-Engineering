/**
 * Project Untitled
 */

#ifndef SIGNUP_H
#define SIGNUP_H

#include <string>
#include <vector>
#include "Member.h"
#include "SignUpUI.h"
#include "MemberCollection.h"

class SignUp {

private:
    MemberCollection* memberCollection;
    SignUpUI* signUpUI;

public:
    // 기본 생성자
    SignUp();

    // memberList 매개변수 생성자
    SignUp(MemberCollection* memberCollection);

    SignUpUI* getSignUpUI();
 
    void signUp(const std::string& id, const std::string& password, 
        const std::string& phoneNumber);
};

#endif