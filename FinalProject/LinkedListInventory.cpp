//
// Created by Harrison Kesel on 12/5/17.
//

#include "LinkedListInventory.h"
#include "LinkedNode.h"
#include "Book.h"
#include <iostream>
#include <fstream>
#include <string>


LinkedListInventory::LinkedListInventory() {
    first= nullptr;
    last = nullptr;
    bookCount=0;
}

void LinkedListInventory:: add() {
    std::string title;
    std::cout<<"Enter a title"<<std::endl;
    std::cin>>title;

    int haveValue;
    std::cout<<"Enter number of copies needed"<<std::endl;
    std::cin>>haveValue;

    int wantValue;
    std::cout<<"Enter number of copies wanted"<<std::endl;
    std::cin>>wantValue;

    Book* book1= new Book(title, haveValue, wantValue);
    if (first != nullptr) {
        first = new LinkedNode(book1);
        last = first;
    }

    else {
            LinkedNode *newNode = new LinkedNode(new Book(title, haveValue, wantValue));
            LinkedNode *temp = last;
            temp->setNext(newNode);
            last = newNode;
        }
    }

void LinkedListInventory::modify() {
    std::string title;
    std::cout<<"Enter a title"<<std::endl;
    std::cin>>title;
    while (first != nullptr){
        Book* book =first->getItem();
        if (book->getTitle().compare(title)==0){
            int wantval;
            std::cout<<"Enter a new want value:"<<std::endl;
            std::cin>>wantval;
            first->getItem()->setWantValue(wantval);
        }//if
            first=first->getNext();

    }//while

}

void LinkedListInventory::sell() {

    std::string title;
    std::cout<<"Enter a title"<<std::endl;
    std::cin>>title;

    while (first != nullptr){
        Book* book =first->getItem();

        if (book->getTitle().compare(title)==0){

            first->getItem()->setHaveValue((first->getItem()->getHaveValue())-1);
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

    while (first!= nullptr){

    }

}


void LinkedListInventory:: order(){
    int itemsRequired;
    std::string title;
    std::ofstream myFile;
    myFile.open("Inventory.txt");
    while(first->getNext()!=nullptr){
        if(first->getItem()->getHaveValue != first->getItem()->getWantValue){
            itemsRequired=((first->getItem()->getWantValue())-(first->getItem()->getHaveValue()));
            itemsRequired=itemsRequired^2;
            title=first->getItem()->getTitle();
            myFile<<title<<" | "<<itemsRequired<<std::endl;
        }//if
    }//while
    myFile.close();
}

void LinkedListInventory::delivery() {
    std::string line;
    std::ifstream myFile;
    myFile.open("Inventory.txt");
    getline(myFile, line);


}
















