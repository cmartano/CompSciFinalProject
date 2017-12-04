//
// Created by Harrison Kesel on 12/3/17.
//

#ifndef COMPSCIFINALPROJECT_STORE_H
#define COMPSCIFINALPROJECT_STORE_H


#include "LinkedNode.h"
#include <iostream>

class Store{

private:
    LinkedNode* inventory;
    int titlesCount;
    std::string* arrayOfTitles;

public:

    Store();
    Store(const Store& storeToCopy);
    Store& operator = (const Store& storeToCopy);
    ~Store();



    /**
     * prints a summary of all available functions
     * the command would be: H
     */
    void help();

    /**
     * provides a summary of the information of a given title
     * it should print: {Title, haveValue, wantValue. WaitingList: ___, ___, ...}
     * (it should print the waiting list in order of queue)
     */
    void inquire(std::string title);

    /**
     * print an alphabetical list of all the titles
     */
    void list();

    /**
     * Add a book to the inventory. Prompt for initial want value and have value. If the title already
     * exists, inform the user and print the information for that title.
     * @param title
     * @param haveValue
     * @param wantValue
     */
    void add(std::string title, int haveValue, int wantValue);

    /**
     * Modify the want value for the specified title. Display current want and have values,
     * and prompt user for new want value.
     * @param title
     */
    void modify(std::string title);

    /**
     * Decrease the count for the specified title by 1.  If the title doesn't exist yet, it should be added.
     * If the title is sold out (or didn't exist), prompt the user for the buyer's information and enter
     * them on the wait list for that title.
     * @param title
     */
    void sell(std::string title);


};

#endif //COMPSCIFINALPROJECT_STORE_H
