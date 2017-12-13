//
// Created by Christian Martano on 12/3/17.
//

#include <string>
#include "CustomerWaiting.h"

CustomerWaiting::CustomerWaiting(std::string name, std::string contactPref, std::string phoneNum, std::string email) {
    this->name = name;
    this->contactPref = contactPref;
    this->phoneNum = phoneNum;
    this->email = email;
}

std::string CustomerWaiting::getContactPref(){
    return contactPref;
}

std::string CustomerWaiting::getEmail(){
    return email;
}

std::string CustomerWaiting::getPhoneNumber(){
    return phoneNum;
}

std::string CustomerWaiting::getName(){
    return name;
}





