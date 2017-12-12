//
// Created by Harrison Kesel on 12/3/17.
//

#ifndef COMPSCIFINALPROJECT_BOOK_H
#define COMPSCIFINALPROJECT_BOOK_H

#include "LinkedNode.h"
#include "LinkedQueue.h"
#include <iostream>




class Book{
private:
    std::string title;
    int wantValue;
    int haveValue;
    LinkedQueue waitingList;


public:

    Book(std::string title, int haveValue, int wantValue);
    Book(const Book& bookToCopy);
    Book& operator = (const Book& bookToCopy);
    ~Book();

    /**
     * Returns the wantValue of the title entered by the user.
     * @param title
     * @return the wantValue of the title entered by the user.
     */
    int getWantValue();

    /**
     * Returns the haveValue of the title entered by the user.
     * @param title
     * @return the haveValue of the title entered by the user.
     */
    int getHaveValue();

    //    I don't know if we need this, i just put it here in case.
    /**
     * Prints out information of the book in the format: {title, haveValue, wantValue}
     * @return
     */
    std::string toString();

    void addCustomerWaiting(std::string name, std::string contactPref, std::string phoneNum, std::string email);

    std::string getCustomerWaitingList();

};



#endif //COMPSCIFINALPROJECT_BOOK_H