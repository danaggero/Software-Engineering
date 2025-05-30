/**
 * Project Untitled
 */


#ifndef _MEMBER_H
#define _MEMBER_H
#include <string>


class Member {
protected:
    std::string id;
    std::string password;

public:
    Member();
    Member(std::string id, std::string password);

    virtual bool validateMember(std::string id, std::string password);
    std::string getId();
    std::string getPassword();
};

#endif //_MEMBER_H