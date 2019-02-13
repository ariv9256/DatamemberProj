//
//  List.hpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 2/7/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <iostream>
#include "../Nodes/LinearNode.hpp"
#include <assert.h>

template <class Type>
class List<Type>
{
protected:
    int size;
public:
    //List operators
    virtual void add(TYpe item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* List_hpp */
