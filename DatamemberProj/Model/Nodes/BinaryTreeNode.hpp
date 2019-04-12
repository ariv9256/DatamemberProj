//
//  BinaryTreeNode.hpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 4/12/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include "Node.hpp"

template<class Type>
class BinaryTreeNode : public Node<Type>
{
protected:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * leftChild;
    BinaryTreeNode<Type> * rightChild;
public:
    BinaryTreeNode<Type>();
    BinaryTreeNode<Type>(Type);
    
    BinaryTreeNode<Type * getRootNode();
    BinaryTreeNode<Type> * getLeftChild();
    BinaryTreeNode<Type> * getRightChild();
    
    void setRootNode(BinaryTreeNode<Type> * rootNode);
    void setLeftChild(BinaryTreeNode<Type> * leftChild);
    void setRightChild(BinaryTreeNode<Type> * rightChild);
};
template <class Type>
BinaryTreeNode<Type> :: binaryTreeNode<Type>()
{
    root = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
}
BinaryTreeNode<Type> :: binaryTreeNode<Type>(Type)
{
    root = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
}
#endif /* BinaryTreeNode_hpp */
