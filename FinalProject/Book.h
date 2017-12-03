//
// Created by Harrison Kesel on 12/3/17.
//

#ifndef COMPSCIFINALPROJECT_BOOK_H
#define COMPSCIFINALPROJECT_BOOK_H

#include "LinkedNode.h"
#include <iostream>




class Book{
private:
    std::string title;
    int wantValue;
    int haveValue;
    LinkedNode* waitingList;


public:

    /**
     * Returns the wantValue of the title entered by the user.
     * @param title
     * @return the wantValue of the title entered by the user.
     */
    int getWantValue(std::string title);

    /**
     * Returns the haveValue of the title entered by the user.
     * @param title
     * @return the haveValue of the title entered by the user.
     */
    int getHaveValue(std::string title);

    //    I don't know if we need this, i just put it here in case.
    /**
     * Prints out information of the book in the format: {title, haveValue, wantValue}
     * @return
     */
    std::string toString();

};



#endif //COMPSCIFINALPROJECT_BOOK_H