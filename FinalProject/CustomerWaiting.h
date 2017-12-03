//
// Created by Harrison Kesel on 12/3/17.
//

#ifndef COMPSCIFINALPROJECT_INVENTORY_H
#define COMPSCIFINALPROJECT_INVENTORY_H

#endif //COMPSCIFINALPROJECT_INVENTORY_H

class customerWaiting{
private:
    std::string contactPref;
    std::string email;
    std::string phoneNumber;
    std::string name;

public:

    /**
     * returns the preferred contact method of the customer
     * @param name
     * @return the contact preference of the customer
     */
    std::string getContactPref(std::string name);

    /**
     * returns the email of the customer
     * @param name
     * @return returns the email of the customer
     */
    std::string getEmail(std::string name);

    /**
     * returns the phone number of the customer
     * @param name
     * @return the phone number of the customer
     */
    std::string getPhoneNumber(std::string name);

    std::string toString();

};