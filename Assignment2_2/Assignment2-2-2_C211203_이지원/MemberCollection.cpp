#include "MemberCollection.h"
#include "Admin.h"
#include "User.h"

// 생성자: admin 계정을 기본 추가
MemberCollection::MemberCollection() : memberCount(0) {
    memberList[memberCount++] = new Admin("admin", "admin");
}

// 회원 추가 함수
void MemberCollection::addMember(const std::string& id, const std::string& password, const std::string& phoneNumber) {
    // User 객체 생성
    Member* newMem = new User(id, password, phoneNumber);

    // 배열 범위 내에서 추가
    if (memberCount < 50) {
        memberList[memberCount++] = newMem;
    }
}

// 로그인 검증 함수
Member* MemberCollection::validateLogin(const std::string& id, const std::string& password) {
    for (int i = 0; i < memberCount; ++i) {
        if (memberList[i]->validateMember(id, password)) {
            return memberList[i];
        }
    }
    return nullptr;
}

// ID로 회원 검색
Member* MemberCollection::findMemberById(const std::string& id) {
    for (int i = 0; i < memberCount; ++i) {
        if (memberList[i]->getId() == id) {
            return memberList[i];
        }
    }
    return nullptr;
}
