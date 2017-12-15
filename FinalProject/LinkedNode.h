//
// Created by Toby Dragon on 10/24/16.
//

#ifndef FINALPROJECT_LINKEDNODE_H
#define FINALPROJECT_LINKEDNODE_H

#include "Book.h"

class LinkedNode {

private:
    Book* item;
    LinkedNode* next;

public:
    LinkedNode(Book* item);
    LinkedNode(const LinkedNode& nodeToCopy); //only copies item, next is set to nullptr
    Book * getItem();
    LinkedNode* getNext();
    void setItem(Book* newItem);
    void setNext(LinkedNode* newNext);

};


#endif //FINALPROJECT_LINKEDNODE_H
