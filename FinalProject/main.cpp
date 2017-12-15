#include <iostream>
#include "Book.h"



int main() {
    std::cout << "Hello, World!" << std::endl;

    std::string title = "Harry Potter";
    int haveValue = 5;
    int wantValue = 11;

    Book harryPotter = Book(title,haveValue,wantValue);

    std::cout<<"Have Value (should be "<< haveValue<<"): "<<harryPotter.getHaveValue()<<std::endl;




    return 0;
    //hey
    //yo
}