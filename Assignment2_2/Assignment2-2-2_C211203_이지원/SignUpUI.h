/**
 * Project Untitled
 */

#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include <vector>
#include "Member.h"

class SignUp;  

class SignUpUI {

public:
    // 기본 생성자
    SignUpUI();

    void startInterface(); 

    void guestSignUp(SignUp* signUp);

};

#endif