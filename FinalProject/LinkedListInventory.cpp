//
// Created by Harrison Kesel on 12/5/17.
//

#include "LinkedListInventory.h"


void add(std::string title, int haveValue, int wantValue) {
    while (first != nullptr){
        if (first.get
    }
    else {
        int count = 0;
        LinkedNode *before = first;
        while (count != index - 1) {
            before = before->getNext();
            if (before == nullptr) {
                throw std::out_of_range("invalid index");
            }
            count += 1;
        }
        LinkedNode *newNode = new LinkedNode(itemToAdd);
        LinkedNode *after = before->getNext();
        before->setNext(newNode);
        newNode->setNext(after);
    }
}














