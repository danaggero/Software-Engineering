#ifndef MEMBERCOLLECTION_H
#define MEMBERCOLLECTION_H

#include <string>
#include "Member.h"

class MemberCollection {
private:
    Member* memberList[50];
    int memberCount;

public:
    MemberCollection();
    void addMember(const std::string& id, const std::string& password, const std::string& phoneNumber);
    Member* validateLogin(const std::string& id, const std::string& password);
    Member* findMemberById(const std::string& id);
};

#endif