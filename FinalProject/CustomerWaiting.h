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
    std::string phoneNum;
    std::string name;


public:

    CustomerWaiting(std::string name, std::string contactPref, std::string phoneNum, std::string email);
    CustomerWaiting(const CustomerWaiting& customerWaitingToCopy);
    CustomerWaiting& operator = (const CustomerWaiting& customerWaitingToCopy);
    ~CustomerWaiting();

    /**
     * returns the preferred contact method of the customer
     * @param name
     * @return the contact preference of the customer
     */
    std::string getContactPref();

    /**
     * returns the email of the customer
     * @param name
     * @return returns the email of the customer
     */
    std::string getEmail();

    /**
     * returns the phone number of the customer
     * @param name
     * @return the phone number of the customer
     */
    std::string getPhoneNumber();

    /**
   * returns the name of the customer
   * @param name
   * @return the name of the customer
   */
    std::string getName();

    //I am not sure if we need this but i added it just in case.
    /**
     * prints out the information of a customer, in the format: {Name, contactPref, phoneNumber, email}
     * @return
     */
    std::string toString();

};