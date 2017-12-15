//
// Created by Harrison Kesel on 12/3/17.
//

#include "Book.h"
#include "LinkedQueue.h"
#include "CustomerWaiting.h"

Book::Book() {
    title = "";
    wantValue = 0;
    haveValue = 0;
    LinkedQueue waitingList;
}


Book::Book(std::string title, int haveValue, int wantValue) {
    title = title;
    wantValue = wantValue;
    haveValue = haveValue;
    LinkedQueue waitingList;
}

Book::Book(const Book& bookToCopy){
    title = bookToCopy.title;
    wantValue = bookToCopy.wantValue;
    haveValue = bookToCopy.haveValue;
    waitingList = bookToCopy.waitingList;
}

Book& Book::operator = (const Book& bookToCopy){
    //TODO
    return *this;
}

Book::~Book(){
    //TODO
}

int Book::getWantValue() { return this->wantValue; }

int Book::getHaveValue() { return haveValue; }

void Book::setHaveValue(int ui){ haveValue=ui; }

void Book::setWantValue(int ui){ haveValue=ui; }

void Book::setTitle(std::string ui){ title=ui; }

std::string Book::getTitle() { return this->title; }




std::string Book::toString(){
    //TODO...maybe, needs to be tested
    std::string myString = "{ Title: ";
    myString += this->title;
    myString += ", WantValue: ";
    myString += this->wantValue;
    myString += ", HaveValue: ";
    myString += this->haveValue;
    myString += "}";


    return myString;

}

void Book::addCustomerWaiting(std::string name, std::string contactPref, std::string phoneNum, std::string email){
    //TODO...maybe, needs to be tested

    CustomerWaiting personToAdd = CustomerWaiting(name, contactPref, phoneNum, email);
    waitingList.enqueue(personToAdd);

}

std::string Book::getCustomerWaitingList(){
    //TODO...maybe, needs to be tested
    CustomerWaiting*temp=waitingList.dequeue();
    std::string nextinline=temp->toString();
    return
}




