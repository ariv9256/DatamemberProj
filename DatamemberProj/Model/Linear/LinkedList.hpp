//
//  LinkedList.hpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 2/7/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp


#include <iostream>
#include "List.hpp"

using namespace std;

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    //Constructors
    LinkedList();
    //Destructors
    virtual ~LinkedList(); //virtual so it can be overriden
    //Helper methods
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    //Structure methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index));
    //Bool contains (Type item);
};
LinkedList<Type> :: LinkedList()
{
    this ->front = nullptr;
    this ->end = nullptr;
    this ->size = 0;
}
void LinkedList<Type> :: add(Type item)
{
    LinearNode<Type> * newData = new LinearNode<Type>(item);
    
    if(this->size == 0)
    {
        this->front = newData;
    }
    else
    {
        this->end->setNextNode(newData);
    }
    this->end = newData;
    
    this->size += 1;
}
void LinkedList<Type> :: addAtIndex(int index, Type item)
{
    assert(index >= 0 && index <= this->size);
    if(index == this-> size)
    {
        add(item);
    }
    else
    {
        LinearNode<Type> * toBeAdded = new LinearNode<Type>(item0;
        if (index == 0)
        {
            toBeAdded->setNextnode(front);
            front = toBeAdded;
        }
        else
        {
            LinearNode<Type> * previous = nullptr;
            LinearNode<Type> * current = front;
            for(int position = 0; position < index; position++)
            {
                previous = current;
                current = current->getNextNode();
            }
            previous->setNextNode(toBeAdded);
            toBeAdded->setNextNode(current);
        }
        this->size++;
    }
}


#endif /* LinkedList_hpp */
