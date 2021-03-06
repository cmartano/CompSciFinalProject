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
    this->first= nullptr;
    this->last = nullptr;
    this->bookCount=1;
}

LinkedListInventory:: ~LinkedListInventory(){}

std::string LinkedListInventory:: add() {
    std::string title;
    std::cout<<"Enter a title"<<std::endl;
    std::cin>>title;

    int haveValue;
    std::cout<<"Enter number of copies needed"<<std::endl;
    std::cin>>haveValue;

    int wantValue;
    std::cout<<"Enter number of copies wanted"<<std::endl;
    std::cin>>wantValue;

    Book book1 = Book(title, haveValue, wantValue);

    LinkedNode* newNode = new LinkedNode(book1);

    if (this->first == nullptr) {

        this->first = newNode;
        this->last = first;

        //this is to check if we actually added a book
        this->first->getItem().toString();
    }
    else {

        this->last->setNext(newNode);
        this->last = newNode;
//            LinkedNode *newNode = new LinkedNode(new Book(title, haveValue, wantValue));
//            LinkedNode *temp = last;
//            temp->setNext(newNode);
//            last = newNode;
        }
    this->bookCount++;


    //this is so we can add the title to the arrayOfTitles in the store
    return title;
    }

void LinkedListInventory::modify() {
    std::string title;
    std::cout<<"Enter a title"<<std::endl;
    std::cin>>title;
    while (first != nullptr){
        Book book =first->getItem();
        if (book.getTitle().compare(title)==0){
            int wantval;
            std::cout<<"Enter a new want value:"<<std::endl;
            std::cin>>wantval;
            first->getItem().setWantValue(wantval);
        }//if
            first=first->getNext();

    }//while

}

void LinkedListInventory::sell() {

    std::string title;
    std::cout<<"Enter a title"<<std::endl;
    std::cin>>title;

    while (first != nullptr){
        Book book =first->getItem();

        if (book.getTitle().compare(title)==0){

            first->getItem().setHaveValue((first->getItem().getHaveValue())-1);
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


    //Book book= first->getItem();

    LinkedNode* temp = first;

    while (temp != nullptr){
        std::cout<<"TEST";
        Book book= temp->getItem();
        if (book.getTitle() == title){
            book.toString();
//            std::string info=book.toString();
//            std::cout<<info<<std::endl;
        }
        temp=temp->getNext();
    }

//    for(int i = 0; i < bookCount; i++){
//        std::cout<<"TEST";
//        Book book= temp->getItem();
//        if (book.getTitle() == title){
//            book.toString();
////            std::string info=book.toString();
////            std::cout<<info<<std::endl;
//        }
//        temp=temp->getNext();
//    }
}


void LinkedListInventory:: order(){
    int itemsRequired;
    std::string title;
    std::ofstream myFile;
    myFile.open("Inventory.txt");
    while(first!=nullptr){
        if((first->getItem().getWantValue())-(first->getItem().getHaveValue())>0){
            itemsRequired=((first->getItem().getWantValue())-(first->getItem().getHaveValue()));
            title=first->getItem().getTitle();
            myFile<<title<<" | "<<itemsRequired<<std::endl;
        }//if
        first=first->getNext();
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
    while(first!=nullptr){
        if((first->getItem().getWantValue())-(first->getItem().getHaveValue())<0){
            itemsRequired=((first->getItem().getHaveValue())-(first->getItem().getWantValue()));
            title=first->getItem().getTitle();
            myFile<<title<<" | "<<itemsRequired<<std::endl;
        }//if
        first=first->getNext();
    }//while
    myFile.close();
}

void LinkedListInventory::quit() {}















