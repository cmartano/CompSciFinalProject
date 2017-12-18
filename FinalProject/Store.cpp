//
// Created by Harrison Kesel on 12/3/17.
//

#include "Store.h"
#include "LinkedListInventory.h"
#include "Inventory.h"


Store::Store() {
    myInventory = new LinkedListInventory();
    titlesCount=0;
    arrayOfTitles= new std::string[titlesCount];
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
    std::cout<<"Q - Quit and Save"<<std::endl;

}

void Store::list() {
    for (int i = 0; i <titlesCount ; ++i) {
        std::cout<< arrayOfTitles[i]<<std::endl;
    }
}

//returns true if the title already exists, false if not.
bool Store::checkTitle(std::string title){
    for(int i = 0; i <= titlesCount; i++){
        if(arrayOfTitles[i] == title){
            return true;
        }
    }
    return false;
}

void Store::getCommand(std::string command) {

    if (command == "I") {
        myInventory->inquire();
    }

    else if (command == "L") {
        list();
    }

    else if (command == "H") {
        help();
    }

    else if (command == "A") {
        //myInventory->add();
        std::string title = myInventory->add();

        if(checkTitle(title) != true){
            //This needs to be made to work with array lists so we dont have to make a whole new function to get arrayLists working.
            arrayOfTitles[titlesCount+1] = title;
        }

    }

    else if (command == "M") {
    myInventory->modify();
    }

    else if (command=="S"){
        myInventory->sell();
    }

    else if(command=="O"){
        myInventory->order();
    }

    else if (command=="D"){
        myInventory->delivery();
    }

    else if (command=="R"){
        myInventory->returnInvoice();
    }



}