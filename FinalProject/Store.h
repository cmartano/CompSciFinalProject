//
// Created by Harrison Kesel on 12/3/17.
//

#ifndef COMPSCIFINALPROJECT_STORE_H
#define COMPSCIFINALPROJECT_STORE_H


#include <string>
#include "LinkedNode.h"
#include "Inventory.h"
#include <iostream>

class Store{

private:
    Inventory* myInventory;
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
     * Take information from a file listing the delivery shipment of books.
     * The file will contain the title and the count of each book included in the shipment.
     * Read the file, and update the have values in the inventory accordingly (the employee
     * will then shelve the actual books from the shipment). Note that the program must add
     * any item to the inventory if the delivered title is not present in the current inventory
     * (for instance if an extra book not requested was delivered).
     * If there is a wait list for any books delivered, the needed copies of that book
     * should not be added to the inventory or be put on shelves. Instead, the program
     * should print the title of the book and the information of the person it should
     * be put on hold for. The employee then calls, texts, or  emails (depending on customer preference)
     * to inform the person that their book is waiting, writes a note marking who is picking up the book,
     * and leaves the book by the counter. The book is then considered sold
     * (the person should be removed from wait list).
     */
    void delivery();

    /**
     * Write a return invoice to a file specifying all books to be returned.
     * For each book, copies should be returned if the have value is higher
     * than the want value. The system should change the have value to equal
     * the want value, and the output file should then give the list of books
     * to take off the shelf and return.
     */
    void returnInvoice();

    /**
     * Save the inventory and wait lists in a file and terminate execution.
     */
    void quit();

};

#endif //COMPSCIFINALPROJECT_STORE_H
