//
//  CircularList.hpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 2/21/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#ifndef CircularList_hpp
#define CircularList_hpp

#include "../Nodes/DoubleNode.hpp"

template<class Type>
class CircularList : public DoubleNode<Type>
{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    int size;
    
    DoubleNode<Type> * findNode(int index);
public:
    CircularList();
    ~CircularList();
    
    void add(Type, item);
    void addAtIndex(int index, Type item);
    Type remove(int index);
    Type setAtIndex(int index, Type item);
    Type getFromIndex(int index);
    int getSize() const;
}
template <class Type>
CircularList<Type> :: CircularList()
{
    front = nullptr;
    end = nullptr;
    this-> = 0;
}
template<class Type>
CircularList<Type> :: ~CircularList()
{
    DoubleNode<Type> * current = front;
    while(this->front != nullptr && this->front != front->getNext())
    {
        front = front->getNext();
        delete current;
        current = front;
    }
    delete front;
}
#endif /* CircularList_hpp */
