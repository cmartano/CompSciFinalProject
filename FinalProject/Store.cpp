//
// Created by Harrison Kesel on 12/3/17.
//

#include "Store.h"
#include "LinkedListInventory.h"
#include "Inventory.h"
#include "ArrayList.h"


Store::Store() {
    myInventory = new LinkedListInventory();
    titlesCount=0;
    arrayOfTitles = new ArrayList();
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
        std::cout<< arrayOfTitles->getValueAt(i) <<std::endl;
    }
}

//returns true if the title already exists, false if not.
bool Store::checkTitle(std::string title){

        if(arrayOfTitles->find(title) != -1){
            return true;
        }else {
            return false;
        }
}

void Store::alphabetize(){

    int failCount = 0;

    for (int i=0; i<titlesCount-1; i++){
        if (arrayOfTitles->getValueAt(i) > arrayOfTitles->getValueAt(i+1)) {
            failCount++;
        }
    }


    while(failCount != 0){
        for(int i = 0; i<titlesCount-1; i++){
            if(arrayOfTitles->getValueAt(i) > arrayOfTitles->getValueAt(i+1)){
                std::string temp = arrayOfTitles->removeValueAt(i+1);
                arrayOfTitles->insertAt( arrayOfTitles->getValueAt(i) ,i+1) ;
                arrayOfTitles->removeValueAt(i);
                arrayOfTitles->insertAt(temp ,i);
            }
        }

        failCount = 0;

        for (int i=0; i<titlesCount-1; i++){
            if (arrayOfTitles->getValueAt(i) > arrayOfTitles->getValueAt(i+1)) {
                failCount++;
            }
        }
    }


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

        titlesCount++;

        if(checkTitle(title) != true){
            arrayOfTitles->insertAtEnd(title);
            alphabetize();
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