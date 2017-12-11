//
// Created by Harrison Kesel on 12/5/17.
//

#include "LinkedListInventory.h"
#include "Book.h"


void LinkedListInventory:: add(std::string title, int haveValue, int wantValue) {
    if (first!= nullptr){
        first=new LinkedNode(new Book(title,haveValue,wantValue));
    }

}














