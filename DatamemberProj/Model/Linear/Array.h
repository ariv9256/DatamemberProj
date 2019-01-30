//
//  Array.h
//  DatamemberProj
//
//  Created by Rivas, Angela on 1/30/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include <assert.h>
#include <iostream>

using namespace std;

teplate <class Type>
class Array
{
private:
    Type * internalArray;
    int size;
public:
    //Constructor
    Array<Type>(int size);
    //Copy Constructor
    Array<Type>(const Array<Type> & toCopy);
    //Destructor
    ~Array<Type>();
    //Operators:
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    //Methods
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
};
template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    this->size = size;
    
    internalArray = new Type[size];
}
template <class Type>
Array<Type> :: Array(const Array<Type> & toCopy)
{
    this-. size = toCopy.getSize();
    //Build the data structor
    internalArray = new Type[size];
    
    for(int index = 0; index < size; index++)
    {
        internalArray[index] = toCopy[index];
    }
}

#endif /* Array_h */