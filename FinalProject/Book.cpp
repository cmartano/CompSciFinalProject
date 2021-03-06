//
// Created by Harrison Kesel on 12/3/17.
//

#include "Book.h"
#include "LinkedQueue.h"
#include "CustomerWaiting.h"
#include <iostream>
#include <string>

//did it work?

Book::Book() {
//    title = "";
//    wantValue = 0;
//    haveValue = 0;
//    LinkedQueue waitingList;
}


Book::Book(std::string title, int haveValue, int wantValue) {
    this->title = title;
    this->wantValue = wantValue;
    this->haveValue = haveValue;
    LinkedQueue waitingList;
}

Book::Book(const Book& bookToCopy){
    title = bookToCopy.title;
    wantValue = bookToCopy.wantValue;
    haveValue = bookToCopy.haveValue;
    waitingList = bookToCopy.waitingList;
}

Book& Book::operator = (const Book& bookToCopy){
    if(this != &bookToCopy){
        this->title = bookToCopy.title;
        this->wantValue = bookToCopy.wantValue;
        this->haveValue = bookToCopy.haveValue;
    }
    return *this;
}

Book::~Book(){
    //TODO
}

int Book::getWantValue() { return this->wantValue; }

int Book::getHaveValue() { return this->haveValue; }

void Book::setHaveValue(int ui){ this->haveValue=ui; }

void Book::setWantValue(int ui){ haveValue=ui; }

void Book::setTitle(std::string ui){ title=ui; }

std::string Book::getTitle() { return this->title; }




void Book::toString(){
    //TODO...maybe, needs to be tested
    //std::string myString = "{ Title: " + this->title + ", WantValue: " + std::to_string(this->wantValue) + ", HaveValue: " + std::to_string(this->haveValue)+ "}";
//    myString += this->title;
//    myString += ", WantValue: ";
//    myString += this->wantValue;
//    myString += ", HaveValue: ";
//    myString += this->haveValue;
//    myString += "}";

    std::cout<<"{ Title: " << this->title << ", WantValue: " << std::to_string(this->wantValue) << ", HaveValue: " << std::to_string(this->haveValue) << "}"<<std::endl;

    //return myString;

}

void Book::addCustomerWaiting(std::string name, std::string contactPref, std::string phoneNum, std::string email){
    //TODO...maybe, needs to be tested

    CustomerWaiting* personToAdd = new CustomerWaiting (name, contactPref, phoneNum, email);
    LinkedNodeCustomerWaiting* addedperson=new LinkedNodeCustomerWaiting(personToAdd);
    waitingList.enqueue(personToAdd);

}

void Book::getCustomerWaiting(){
    //TODO...maybe, needs to be tested
    CustomerWaiting* temp=waitingList.dequeue();

    std::cout<<"{ "<< temp->getName()<<", ";

    if(temp->getContactPref() == "CALL"){
        std::cout<<"CALL, Phone Number: "<< temp->getPhoneNumber() <<"}"<<std::endl;
    }else if(temp->getContactPref() == "TEXT"){
        std::cout<<"TEXT, Phone Number: "<< temp->getPhoneNumber() <<"}"<<std::endl;
    }else{
        std::cout<<"EMAIL, Email: "<< temp->getEmail() <<"}"<<std::endl;
    }
}




