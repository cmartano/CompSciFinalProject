//
// Created by Harrison Kesel on 12/14/17.
//

#ifndef FINALPROJECT_LINKEDNODECUSTOMERWAITING_H
#define FINALPROJECT_LINKEDNODECUSTOMERWAITING_H

#include "CustomerWaiting.h"

class LinkedNodeCustomerWaiting {

private:
    CustomerWaiting item;
    LinkedNodeCustomerWaiting* next;

public:
    LinkedNodeCustomerWaiting(CustomerWaiting item);
    LinkedNodeCustomerWaiting(const LinkedNodeCustomerWaiting& nodeToCopy); //only copies item, next is set to nullptr
    CustomerWaiting getItem();
    LinkedNodeCustomerWaiting* getNext();
    void setItem(CustomerWaiting newItem);
    void setNext(LinkedNodeCustomerWaiting* newNext);
};



#endif //FINALPROJECT_LINKEDNODECUSTOMERWAITING_H
