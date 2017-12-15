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

    Book book1= Book(title, haveValue, wantValue);
    LinkedNode* newNode = new LinkedNode(book1);
    if (first == nullptr) {
        first = newNode;
        last = first;
    }

    else {

        last->setNext(newNode);
        last = newNode;
//            LinkedNode *newNode = new LinkedNode(new Book(title, haveValue, wantValue));
//            LinkedNode *temp = last;
//            temp->setNext(newNode);
//            last = newNode;
        }
    }

void LinkedListInventory::modify() {
    std::string title;
    std::cout<<"Enter a title"<<std::endl;
    std::cin>>title;
    LinkedNode* temp=first;
    while (temp != nullptr){
        Book book =temp->getItem();
        if (book.getTitle().compare(title)==0){
            int wantval;
            std::cout<<"Enter a new want value:"<<std::endl;
            std::cin>>wantval;
            temp->getItem().setWantValue(wantval);
        }//if
            temp=temp->getNext();

    }//while

}

void LinkedListInventory::sell() {

    std::string title;
    std::cout<<"Enter a title"<<std::endl;
    std::cin>>title;
    LinkedNode* temp=first;
    while (temp != nullptr){
        Book book =first->getItem();

        if (book.getTitle().compare(title)==0){

            temp->getItem().setHaveValue((first->getItem().getHaveValue())-1);
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

    Book book= first->getItem();
    LinkedNode* temp=first;
    while (temp!= nullptr){
        Book* book= temp->getItem();
        if (book->getTitle().compare(title)==0){
            std::string info=book->toString();
            std::cout<<info<<std::endl;
        }
        temp=temp->getNext();
    }
}


void LinkedListInventory:: order(){
    int itemsRequired;
    std::string title;
    std::ofstream myFile;
    myFile.open("Inventory.txt");
    LinkedNode* temp=first;
    while(temp!=nullptr){
        if((temp->getItem().getWantValue())-(temp->getItem().getHaveValue())>0){
            itemsRequired=((temp->getItem().getWantValue())-(temp->getItem().getHaveValue()));
            title=temp->getItem().getTitle();
            myFile<<title<<" | "<<itemsRequired<<std::endl;
        }//if
        temp=temp->getNext();
    }//while
    myFile.close();
}

void LinkedListInventory::delivery() {
    std::string line;
    std::ifstream myFile;
    myFile.open("Inventory.txt");
    getline(myFile, line);
    /*
     * GET TITLE FROM LINE GET NUMBER FROM LINE
     *
     */
}

void LinkedListInventory::returnInvoice(){
    int itemsRequired;
    std::string title;
    std::ofstream myFile;
    myFile.open("Inventory.txt");
    LinkedNode* temp=first;
    while(temp!=nullptr){
        if((temp->getItem().getWantValue())-(temp->getItem().getHaveValue())<0){
            itemsRequired=((temp->getItem().getHaveValue())-(temp->getItem().getWantValue()));
            title=temp->getItem().getTitle();
            myFile<<title<<" | "<<itemsRequired<<std::endl;
        }//if
        temp=temp->getNext();
    }//while
    myFile.close();
}
















