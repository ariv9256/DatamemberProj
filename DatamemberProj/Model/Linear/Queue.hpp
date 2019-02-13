//
//  Queue.hpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 2/13/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <iostream>
#include "LinkedList.hpp"

using namespace std;

template <class Type>
class Queue : public LinkedList<Type>
{
public:
    Queue();
    ~Queue();
    
    //Queue methods
    void enqueue(Type data);
    Type dequeue();
    Type peek();
    void clear();
    
    //overridden linkedList methods
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int index);
}

#endif /* Queue_hpp */
