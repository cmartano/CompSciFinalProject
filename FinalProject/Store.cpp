//
// Created by Harrison Kesel on 12/3/17.
//

#include "Store.h"
#include "LinkedListInventory.h"
#include "Inventory.h"


Store::Store() {
    myInventory = new LinkedListInventory();
    titlesCount=0;
    arrayOfTitles= new std::string{arrayOfTitles};
}

void Store::help(){
    std::cout<<"List of Commands:"<<std::endl;
    std::cout<<"I - receive all information for a specific title"<<std::endl;
    std::cout<<"L - list of all titles alphabetically"<<std::endl;
    std::cout<<"A - add a title to the inventory"<<std::endl;
    std::cout<<"M - modify the want value of a title"<<std::endl;
    std::cout<<"S - decrease have value for a title"<<std::endl;
    std::cout<<"O - create a book order"<<std::endl;
    std::cout<<"D - take info from a delivery file"<<std::endl;
    std::cout<<"R - write a return invoice"<<std::endl;

}

void Store::list() {
    for (int i = 0; i <titlesCount ; ++i) {
        std::cout<< arrayOfTitles[i]<<std::endl;
    }
}

void Store::inquire() {
    std::string title;
    std::cout<<"Enter a title"<<std::endl;
    std::cin>>title;
    myInventory

}

void Store::getCommand(std::string command) {
    if (command=="I"){
        inquire();
    }
}