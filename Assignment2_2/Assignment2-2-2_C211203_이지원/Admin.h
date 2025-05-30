/**
 * Project Untitled
 */


#ifndef _ADMIN_H
#define _ADMIN_H

#include "Member.h"
#include <string>

class Admin : public Member {
public:
    Admin(const std::string& id, const std::string& password);
    virtual ~Admin();
};

#endif //_ADMIN_H