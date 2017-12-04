//
// Created by Harrison Kesel on 12/3/17.
//

#ifndef COMPSCIFINALPROJECT_INVENTORY_H
#define COMPSCIFINALPROJECT_INVENTORY_H

#endif //COMPSCIFINALPROJECT_INVENTORY_H

class CustomerWaiting{
private:
    std::string contactPref;
    std::string email;
    std::string phoneNumber;
    std::string name;

public:

    CustomerWaiting();
    CustomerWaiting(const CustomerWaiting& customerWaitingToCopy);
    CustomerWaiting& operator = (const CustomerWaiting& customerWaitingToCopy);
    ~CustomerWaiting();

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

    //I am not sure if we need this but i added it just in case.
    /**
     * prints out the information of a customer, in the format: {Name, contactPref, phoneNumber, email}
     * @return
     */
    std::string toString();

};