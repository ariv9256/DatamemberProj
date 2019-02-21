//
//  DoubleNode.hpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 2/21/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#ifndef DoubleNode_hpp
#define DoubleNode_hpp

#include <iostream>
#include "Node.hpp"

template<class Type>
class DoubleNode : public Node<Type>
{
protected:
    DoubleNode<Type> * previous;
    DoubleNode<Type> * next;
    
public:
    DoubleNode();
    DoubleNode(Type data);
    DoubleNode(Type data, DoubleNode <Type> * previous, Double<Type> * next);
    
    DoubleNode<Type> * getPrevious();
    DoubleNode<Type> * getNext();
    
    void setPrevious(DoubleNode<Type> * previous);
    void setNext(DoubleNode<Type> * next);
};

#endif /* DoubleNode_hpp */
