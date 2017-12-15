//
// Created by Harrison Kesel on 12/14/17.
//

#ifndef FINALPROJECT_LINKEDNODECUSTOMERWAITING_H
#define FINALPROJECT_LINKEDNODECUSTOMERWAITING_H

#include "CustomerWaiting.h"

class LinkedNode {

private:
    CustomerWaiting* item;
    LinkedNode* next;

public:
    LinkedNode(CustomerWaiting* item);
    LinkedNode(const LinkedNode& nodeToCopy); //only copies item, next is set to nullptr
    Book * getItem();
    LinkedNode* getNext();
    void setItem(CustomerWaiting* newItem);
    void setNext(LinkedNode* newNext);
};



#endif //FINALPROJECT_LINKEDNODECUSTOMERWAITING_H
