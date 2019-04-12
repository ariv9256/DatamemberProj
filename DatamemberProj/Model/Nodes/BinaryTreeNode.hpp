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
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;
public:
    BinaryTreeNode<Type>();
    BinaryTreeNode<Type>(Type data);
    
    void setRootNode(BinaryTreeNode<Type> * root);
    void setLeftChild(BinaryTreeNode<Type> * left);
    void setRightChild(BinaryTreeNode<Type> * right);
    
    BinaryTreeNode<Type> * getRootNode();
    BinaryTreeNode<Type> * getLeftChild();
    BinaryTreeNode<Type> * getRightChild();
};
//Constructors
template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
    root = nullptr;
    left= nullptr;
    right = nullptr;
}
template<class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data)
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}
//Getters & setters
template<class Type>
void BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * newRoot)
{
    root = newRoot;
}
template<class Type>
void BinaryTreeNode<Type> :: setRightChild(BinaryTreeNode<Type> * right)
{
    this->right = right;
}
template<class Type>
void BinaryTreeNode<Type> :: setLeftChild(BinaryTreeNode<Type> * left)
{
    this->left = left;
}
    
#endif /* BinaryTreeNode_hpp */
