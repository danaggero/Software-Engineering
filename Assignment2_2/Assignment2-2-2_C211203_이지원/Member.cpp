/**
 * Project Untitled
 */

#include <iostream>
#include "Member.h"

/**
 * Member implementation
 */


#include "Member.h"

Member::Member() : id(""), password("") {}

Member::Member(std::string id, std::string password)
    : id(id), password(password) {}

bool Member::validateMember(std::string inputId, std::string inputPassword) {
    return (id == inputId && password == inputPassword);
}

std::string Member::getId() {
    return id;
}

std::string Member::getPassword() {
    return password;
}