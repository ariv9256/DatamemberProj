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
    s
};


#endif /* LinkedList_hpp */
