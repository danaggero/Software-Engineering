/**
 * Project Untitled
 */

#include "LoginUI.h"
#include "Login.h"
#include <iostream>
#include <fstream>

extern std::ifstream in_fp;
extern std::ofstream out_fp;

void LoginUI::startInterface() {
    //std::cout << "LoginUI::startInterface() 실행" << std::endl;
}

void LoginUI::inputLogin(Login* login) {
    std::string id, password;
    in_fp >> id >> password;

    //std::cout << "LoginUI 입력값: " << id << ", " << password << std::endl;

    if (login->login(id, password)) {
        out_fp << "2.1. 로그인\n";
        out_fp << "> " << id << " " << password << "\n\n";

    }
    else {
        out_fp << "2.1. 로그인 실패\n\n";
    }
}