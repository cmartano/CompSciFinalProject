//
// Created by Harrison Kesel on 10/10/17.
//
#include <iostream>
#include "ArrayList.h"

ArrayList::ArrayList(int initialCapacity) {
    this->array = new std::string[initialCapacity];
    this-> currItemCount = 0;
    this-> currCapacity = initialCapacity;

}

void ArrayList::doubleCapacity() {
    int tempCapacity = currCapacity;

    if(currCapacity <= currItemCount){
        currCapacity=currCapacity *2;

        std::string* newCopyArray = new std::string[currCapacity];

        for(int i = 0; i < currItemCount; i++){
            *(newCopyArray + i) = *(array + i);
        }

        delete[] array;
        array = nullptr;


        array = newCopyArray;

    }
}

/*
    Car::Car(const Car& carToCopy){
        make = carToCopy.make;
        model = carToCopy.model;
        year = carToCopy.year;
        mileage = carToCopy.mileage;
        askingPrice = carToCopy.askingPrice;
        dealerCost = carToCopy.dealerCost;

        arraySize=carToCopy.arraySize;
        maintCount=carToCopy.maintCount;

        maintArray = new float[arraySize];
        for (int i=0; i<maintCount; i++){
            maintArray[i] = carToCopy.maintArray[i];
        }
    }
 */

ArrayList::ArrayList(const ArrayList& arrayListToCopy) {

    currItemCount = arrayListToCopy.currItemCount;
    currCapacity = arrayListToCopy.currCapacity;

    array = new std::string[currCapacity];
    for(int i = 0; i < currItemCount; i++){
        array[i] = arrayListToCopy.array[i];
    }
}

// Car& Car::operator=(const Car& carToCopy){

ArrayList& ArrayList::operator= (const ArrayList& arrayListToCopy){
    if(this != &arrayListToCopy) {
        delete[] array;


        int currItemCount = arrayListToCopy.currItemCount;
        int currCapacity = arrayListToCopy.currCapacity;

        std::string *array = new std::string[currCapacity];
        for (int i = 0; i < currItemCount; i++) {
            array[i] = arrayListToCopy.array[i];
        }
    }
    return *this;
}

ArrayList::~ArrayList(){
    delete[] array;
}

void ArrayList::insertAtEnd(std::string itemToAdd){
    doubleCapacity();

    *(array + currItemCount)= itemToAdd;
    currItemCount++;
}

void ArrayList::insertAtFront(std::string itemToAdd) {
    doubleCapacity();


    std::string* tempArray = new std::string[currCapacity];

    tempArray[0] = itemToAdd;

    for(int i = 0; i < currItemCount; i++){
        tempArray[i+1] = array[i];
    }

    currItemCount++;

    delete[] array;
    array = nullptr;

    array = tempArray;

}


void ArrayList::insertAt(std::string itemToAdd, int index) {

    if(index< 0 || index > currItemCount){
        throw std::out_of_range("<out_of_range>");
    }else {

        doubleCapacity();


        std::string *tempArray = new std::string[currCapacity];

        tempArray[index] = itemToAdd;

        for (int i = index; i < currItemCount; i++) {
            tempArray[i + 1] = array[i];
        }

        currItemCount++;

        delete[] array;
        array = nullptr;

        array = tempArray;
    }
}

std::string ArrayList::getValueAt(int index) {

    if(index< 0 || index >= currItemCount){
        throw std::out_of_range("<out_of_range>");
    }else {
        return array[index];
    }
}

std::string ArrayList::removeValueAt(int index) {

    if(index< 0 || index > currItemCount){
        throw std::out_of_range("<out_of_range>");
    }else {

        std::string stringToReturn = array[index];

        std::string *tempArray = new std::string[currCapacity];

        for (int i = 0; i < index; i++) {
            tempArray[i] = array[i];
        }

        for (int i = index + 1; i < currItemCount; i++) {
            tempArray[i-1] = array[i];
        }

        delete[] array;
        array = nullptr;

        array = tempArray;
        currItemCount--;

        return stringToReturn;
    }
}

bool ArrayList::isEmpty() {

    if(currItemCount > 0){
        return false;
    }else{
        return true;
    }
}

int ArrayList::itemCount() {
    return currItemCount;
}

void ArrayList::clearList() {

    std::string* tempArray = new std::string[currCapacity];

    delete[] array;
    array = nullptr;

    array = tempArray;

    currItemCount = 0;

}

std::string toStringStub(const std::string* const arrayPtr, const int size){

    if(size <= 0){
        return "";
    }else {
        std::string myString = toStringStub(arrayPtr, size - 1);

        std::string result = myString + *(arrayPtr + size - 1) +"," + " ";

        return result;
    }
}

std::string ArrayList::toString(){
    if(currItemCount <= 0){
        return "{}";
    }
    std::string myString = "{";
    myString += toStringStub(array,currItemCount);
    std::string newString = myString.substr(0,myString.length() - 2);

    newString += "}";

    return newString;
}

//changed to compare two strings at a time, rather than two ints at a time.
int ArrayList::findMaxIndex(){
    std::string temp = array[0];
    for(int i = 0; i< currItemCount; i++){

        if(temp > *(array + i)){
            return i;
        }
    }

    return -1;
}

int ArrayList::find(std::string titleToFind) {

    for(int i = 0; i< currItemCount; i++){

        if(titleToFind == *(array + i)){
            return i;
        }
    }

    return -1;
}

int ArrayList::findLast(std::string titleToFind) {
    for(int i = currItemCount; i>= 0; i--){

        if(titleToFind == *(array + i)){
            return i;
        }
    }

    return -1;
}


