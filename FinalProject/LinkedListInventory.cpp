//
// Created by Harrison Kesel on 12/5/17.
//

#include "LinkedListInventory.h"
#include "Book.h"


void LinkedListInventory:: add(std::string title, int haveValue, int wantValue) {
    if (first != nullptr) {
        first = new LinkedNode(new Book(title, haveValue, wantValue));
        end = first;
    }

    else {
            LinkedNode *newNode = new LinkedNode(new Book(title, haveValue, wantValue));
            LinkedNode *temp = end;
            temp->setNext(newNode);
            end = newNode;
        }
    }

void LinkedListInventory::modify(std::string title) {
    while (first != nullptr){

        if (first->getItem().getTitle==title){
            std::cout<<"Enter a new want value:"<<std::endl;
            std::cin>>wantval;
            first->getItem().setWantValue(wantval);
        }

        else{
            first=first->getNext();
        }
    }
}

void LinkedListInventory::sell(std::string title) {
    while (first != nullptr){

        if (first->getItem().getTitle==title){
            first->getItem().setHaveValue(first->getItem().getHaveValue-1);
        }

        else{
            first=first->getNext();
        }
    }
}
















