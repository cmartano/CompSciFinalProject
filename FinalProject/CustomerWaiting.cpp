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

std::string getContactPref(){
    return customerWaiting.contactPref;
}

std::string getEmail(){
    return customerWaiting.email;
}

std::string getPhoneNumber(){
    return customerWaiting.phoneNumber;
}

std::string getName(){
    return customerWaiting.name;
}





