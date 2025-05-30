/**
 * Project Untitled
 */

/**
 * Admin implementation
 */
#include "Admin.h"

Admin::Admin(const std::string& id, const std::string& password)
    : Member(id, password) {}

Admin::~Admin() {}