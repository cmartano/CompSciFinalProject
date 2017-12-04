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
     * add a book to the inventory of books, it needs a title, haveValue, and wantValue to create the book.
     * It will also add the title of the book to the titleList and increase the title count by 1.
     * It also needs to check if this title already exists, so binFind this title from the titleList to see if it already exists
     * If it already exists, throw exception, book already exists.
     * @param title
     * @param haveValue
     * @param wantValue
     */
    void addBook(std::string title, int haveValue, int wantValue);


};

#endif //COMPSCIFINALPROJECT_STORE_H
