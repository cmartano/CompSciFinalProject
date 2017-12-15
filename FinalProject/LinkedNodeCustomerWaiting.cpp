//
// Created by Harrison Kesel 12/14/17.
//
#include "LinkedNodeCustomerWaiting.h"


LinkedNode::LinkedNode(CustomerWaiting* item){
    this->item = item;
    next = nullptr;
}

LinkedNode::LinkedNode(const LinkedNode& nodeToCopy){
    item = nodeToCopy.item;
    next = nullptr;
}

CustomerWaiting* LinkedNode::getItem(){
    return item;
}

LinkedNode* LinkedNode::getNext(){
    return next;
}

void LinkedNode::setItem(CustomerWaiting* newItem){
    item = newItem;
}

void LinkedNode::setNext(LinkedNode* newNext){
    next = newNext;
}
