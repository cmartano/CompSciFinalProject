//
// Created by Toby Dragon on 10/17/17.
//
#include "LinkedNode.h"


LinkedNode::LinkedNode(Book item){
    this->item = item;
    next = nullptr;
}

LinkedNode::LinkedNode(const LinkedNode& nodeToCopy){
    item = nodeToCopy.item;
    next = nullptr;
}

Book  LinkedNode::getItem(){
    return item;
}

LinkedNode* LinkedNode::getNext(){
    return next;
}

void LinkedNode::setItem(Book newItem){
    item = newItem;
}

void LinkedNode::setNext(LinkedNode* newNext){
    next = newNext;
}
