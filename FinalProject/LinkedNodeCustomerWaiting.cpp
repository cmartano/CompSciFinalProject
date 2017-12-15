//
// Created by Harrison Kesel 12/14/17.
//
#include "LinkedNodeCustomerWaiting.h"


LinkedNodeCustomerWaiting::LinkedNodeCustomerWaiting(CustomerWaiting item){
    this->item = item;
    next = nullptr;
}

LinkedNodeCustomerWaiting::LinkedNodeCustomerWaiting(const LinkedNodeCustomerWaiting& nodeToCopy){
    item = nodeToCopy.item;
    next = nullptr;
}

CustomerWaiting* LinkedNodeCustomerWaiting::getItem(){
    return item;
}

LinkedNodeCustomerWaiting* LinkedNodeCustomerWaiting::getNext(){
    return next;
}

void LinkedNodeCustomerWaiting::setItem(CustomerWaiting* newItem){
    item = newItem;
}

void LinkedNodeCustomerWaiting::setNext(LinkedNodeCustomerWaiting* newNext){
    next = newNext;
}
