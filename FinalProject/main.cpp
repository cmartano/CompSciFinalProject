#include <iostream>
#include "Book.h"
#include "Store.h"



int main() {
    std::cout << "Hello, World!" << std::endl;
    Store *MyStore = new Store();
    while(1) {

        
        std::string command;

        std::cout << "enter a command:";
        std::cin >> command;

        MyStore->getCommand(command);
    }
//
//    std::string title = "Harry Potter";
//    int haveValue = 5;
//    int wantValue = 11;
//
//    Book harryPotter = Book(title,haveValue,wantValue);
//
//    harryPotter.toString();
//
//    std::cout<<"Have Value (should be "<< haveValue<<"): "<<harryPotter.getHaveValue()<<std::endl;



    return 0;
    //hey
    //yo
}