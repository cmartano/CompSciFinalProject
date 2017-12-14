//
// Created by Harrison Kesel on 12/5/17.
//

#include "LinkedListInventory.h"
#include "LinkedNode.h"
#include "Book.h"
#include <iostream>
#include <fstream>


LinkedListInventory::LinkedListInventory() {
    first= nullptr;
    last = nullptr;
    bookCount=0;
}

void LinkedListInventory:: add(std::string title, int haveValue, int wantValue) {
    Book* book1= new Book(title, haveValue, wantValue);
    if (first != nullptr) {
        first = new LinkedNode(book1);
        last = first;
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
        }//if
            first=first->getNext();

    }//while

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

void LinkedListInventory::inquire() {
    std::string title;
    std::cout<<"Enter a title"<<std::endl;
    std::cin>>title;

}


void LinkedListInventory:: order(){
    int itemsRequired;
    std::string title;
    std::ofstream myFile;
    myFile.open("/users/ChristianMartano/Downloads/Inventory.txt");
    while(first->getNext()!=nullptr){
        if(first->getItem().getHaveValue!=first->getItem.getWantValue){
            itemsRequired=(first->getItem().getWantvalue-first->getItem.getHaveValue);
            itemsRequired=itemsRequired^2;
            title=first->getItem().getTitle();
            myFile<<title<<" | "<<itemsRequired<<"\n";
        }//if
    }//while
}
















