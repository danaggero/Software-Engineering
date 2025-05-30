/**
 * Project Untitled
 */
#include <iostream>
#include <fstream>
#include <string>

#include "SignUpUI.h"
#include "SignUp.h"

/**
 * User Interface::SignUpUI implementation
 */

extern std::ifstream in_fp;
extern std::ofstream out_fp;

SignUpUI::SignUpUI() {
}


void SignUpUI::startInterface() {

    // SignUp interface 실행

}


void SignUpUI::guestSignUp(SignUp* signUp) {

    std::string id, password, phoneNumber;

    // 아이디, 비밀번호, 전화번호 입력받기
    in_fp >> id >> password >> phoneNumber;

    // Controller의 signUp 함수 호출
    signUp->signUp(id, password, phoneNumber);

    out_fp << "1.1. 회원가입" << std::endl;
    out_fp << "> " << id << " " << password << " " << phoneNumber << std::endl << std::endl;
}
