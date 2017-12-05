//
// Created by Harrison Kesel on 12/5/17.
//

#ifndef FINALPROJECT_LINKEDLISTINVENTORY_H
#define FINALPROJECT_LINKEDLISTINVENTORY_H

class LinkedListInventory : public Inventory{

private:
    LinkedNode* first;
    LinkedNode* last;
    int bookcount;

public:
    LinkedListInventory();{
    }


};

#endif //FINALPROJECT_LINKEDLISTINVENTORY_H
