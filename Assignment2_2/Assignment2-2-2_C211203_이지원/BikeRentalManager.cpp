#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "LoginUI.h"
#include "LogoutUI.h"
#include "Login.h"
#include "Logout.h"
#include "SignUp.h"
#include "SignUpUI.h"
#include "AddBike.h"
#include "AddBikeUI.h"
#include "BikeCollection.h"
#include "GetRentalBikeInfo.h"
#include "GetRentalBikeInfoUI.h"
#include "RentBikeUI.h"
#include "RentBike.h"
#include "MemberCollection.h"
#include "Exit.h"
#include "ExitUI.h"

#include "Member.h"
#include "User.h"
#include "Admin.h"
#include "Bike.h"


// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void program_exit();

using namespace std;


// 파일 포인터 변수 선언
ofstream out_fp;
ifstream in_fp;



void doTask()
{

    MemberCollection* memberCollection = new MemberCollection();
    BikeCollection* bikeCollection = new BikeCollection();
   
    Member* currentMember = nullptr; 


    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;


        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   
            {
                // 1.1. 회원가입 메뉴
                
                // SignUp controller 호출
                SignUp *signUp = new SignUp(memberCollection); 
                // Controller를 이용하여 SignUpUI의 guestSignUp 호출
                signUp->getSignUpUI()->guestSignUp(signUp);

                break;
            }

            }
            break;
        }

        case 2:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                // 2.1. 로그인 메뉴
                // Login controller 호출
                Login* login = new Login(memberCollection, currentMember);
                // Controller를 이용하여 LoginUI의 inputLogin 호출
                login->getLoginUI()->inputLogin(login); 

                break;
            }
            case 2:
            {
                // 2.2. 로그아웃 메뉴
                Logout* logout = new Logout(currentMember);
                logout->getLogoutUI()->memberLogout(logout);


                break;
            }
            }
            break;
        }

        case 3:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                // 3.1. 자전거 등록 메뉴
                AddBike* addBike = new AddBike(bikeCollection);
                addBike->getAddBikeUI()->registerBike(addBike);
                break;
            }
            }
            break;
        }

        case 4:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                // 4.1. 자전거 대여 메뉴
                RentBike* rentBike = new RentBike(bikeCollection, currentMember);
                rentBike->getRentBikeUI()->rentBike(rentBike);                
                break;
            }
            }
            break;
        }

        case 5:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                // 5.1. 자전거 대여 리스트 출력 메뉴
                GetRentalBikeInfo* rentalInfo = new GetRentalBikeInfo(currentMember);
                rentalInfo->showRentalInfo();
                break;
            }
            }
            break;
        }

        case 6:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                // 6.1. 종료 메뉴
                Exit* exit = new Exit(is_program_exit);  // 🔥 참조 전달
                exit->getExitUI()->exitProgram(exit);
                break;
            }
            }
            break;
        }
        }
    }
}

int main() {

    // 파일 입출력을 위한 초기화
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    doTask();

    out_fp.close();
    in_fp.close();

    return 0;
}

