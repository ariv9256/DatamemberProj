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
};


#endif /* LinkedList_hpp */
