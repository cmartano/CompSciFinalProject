//
// Created by Toby Dragon on 10/24/17.
//
#include "LinkedQueue.h"
#include "CustomerWaiting.h"


//Creates an empty queue
LinkedQueue::LinkedQueue(){
    front = nullptr;
    end = nullptr;
}

//Copy Constructor
LinkedQueue::LinkedQueue(const LinkedQueue& queueToCopy){

    if (queueToCopy.front == nullptr) {
        front = nullptr;
        end = nullptr;
    }
    else {
        front = queueToCopy.front;
        end = front;
        while (end->getNext() != nullptr) {
            end = end->getNext();
        }
    }

}

//Destructor
LinkedQueue::~LinkedQueue(){

    while (front) {
        delete front;
        front = front->getNext();
    }
}


//adds an item to the end of the queue
void LinkedQueue::enqueue(CustomerWaiting* item){
    LinkedNodeCustomerWaiting* newNode = new LinkedNodeCustomerWaiting(item);
    //if front is nullptr, end should be nullptr too
    if (front == nullptr){
        front = newNode;
        end = newNode;
    }
    else {
        end->setNext(newNode);
        end = newNode;
    }
}

//takes an item off the front of the queue and returns it
//throws out_of_range exception if the queue is empty
CustomerWaiting* LinkedQueue::dequeue(){
    //TODO, consider cases where:
    // the queue is empty
    // the queue has one item
    // the queue has many items
    if(front == nullptr) {
        throw std::out_of_range("<Nothing in Queue>");
    }


    CustomerWaiting*  frontToReturn = front->getItem();

    front = front->getNext();

    return frontToReturn;
}

//returns true if the queue has no items, false otherwise
bool LinkedQueue::isEmpty(){
    return front == nullptr;
}
