//
//  LinearNode.h
//  DatamemberProj
//
//  Created by Rivas, Angela on 1/30/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#ifndef LinearNode_h
#define LinearNode_h

#include "Node.hpp"

template <class Type>
class LinearNode : public Node<Type>
{
private:
    LinearNode<Type> * next;
public:
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
    void setNextNode(LinearNode<Type> * next);
};
template < class Type>
LinearNode<Type> :: LinearNode() : Node<Type>()
{}

template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this ->next = nullptr;
}
template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type> (data)
{
    this ->next = next;
}
template <class Type>
LinearNode<Type> *  LinearNode<Type> :: getNextNode()
{
    return this->next;
}
template <class Type>
void LinearNode<Type> :: setNextNode(LinearNode<Type> * next)
{
    this->next = next;
}

#endif /* LinearNode_h */
