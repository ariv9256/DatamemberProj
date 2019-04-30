//
//  AVLTree.hpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 4/30/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#ifndef AVLTree_hpp
#define AVLTree_hpp

#include "BinarySearchTree.hpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    BinaryTreeNode<Type> * leftRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotation(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode(BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode(BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type>* parent);
public:
    AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
};
template<class Type>
AVLTree<Type> :: AVLTree() : BinarySearchTree<Type>()
{
    this->root = nullptr;
}
template<class Type>
void AVLTree<Type> :: insert(Type item)
{
    insertNode(this->getRoot(), item);
}
template<class Type>
void AVLTree<Type> :: remove(Type item)
{
    removeNode(this->getRoot(), item);
}
template<class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    //If the node is == nullptr, it inserts node as root of type parent
    if(parent == nullptr)
    {
        parent = new BinaryTreeNode<Type>(inserted);
        if(this->getRoot() == nullptr)
        {
            this->setRoot(parent);
        }
        return parent;
    }
    //If less than parent, insert to left
    else if(inserted < parent->getData())
    {
        parent->setLeftChild(insertNode(parent->getLeftChild(), inserted));
        parent = balanceSubTree(parent);
    }
    //If greater than parent, insert to right
    else if(inserted > parent->getData())
    {
        parent->setRightChild(insertNode(parent->getRightChild(), inserted));
        parent = balanceSubTree(parent);
    }
    return parent;
}
template<class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: removeNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    if(parent == nullptr)
    {
        return parent;
    }
    if(inserted < parent->getData())
    {
        parent->setLeftChild(removeNode(parent->getLeftChild(), inserted));
    }
    else if (inserted > parent->getData())
    {
        parent->setRightChild(removeNode(parent->getRightChild(), inserted));
    }
    else
    {
        BinaryTreeNode<Type> * temp;
        if(parent->getLeftChild() == nullptr && parent->getRightChild() == nullptr)
        {
            temp = parent;
            delete temp;
        }
        else if(parent->getLeftChild() == nullptr)
        {
            *parent = *parent->getRightChild();
        }
        else if(parent->getRightChild() == nullptr)
        {
            *parent = *parent->getLeftChild();
        }
        else
        {
            BinaryTreeNode<Type> * leftMost = this->getLeftMostChild(parent->getRightChild());
            parent->setData(leftMost->getData());
            parent->setRightChild(remove(parent->getRightChild(), inserted));
        }
    }
    if(parent == nullptr)
    {
        return parent;
    }
    return balanceSubTree(parent);
}
template<class Type>
int AVLTree<Type> :: heightDifference(BinaryTreeNode<Type> * node)
{
    int balance;
    int leftHeight = this->calculateHeight(node->getLeftChild());
    int rightHeight = this-calculateHeight(node->getRigtChild());
    balance = leftHeight = rightHeight;
    return balance;
}
template<class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: balanceSubTree(BinaryTreeNode<Type> * parent)
{
    int balanceFactor = heightDifference(parent);
    if(balanceFactor > 1)
    {
        if(heightDifference(parent->getLeftChild()) > 0)
        {
            parent = leftRotation(parent);
        }
        else
        {
            parent = leftRightRotation(parent);
        }
    }
    else if(balanceFactor < -1)
    {
        if(heightDifference(parent->getRightChild()) > 0)
        {
            parent = rightLeftRotation(parent);
        }
        else
        {
            parent = rightRotation(parent);
        }
    }
    return parent;
}
template<class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftRotation(BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getLeftChild();
    
    parent->setLeftChild(changedNode->getRightChild());
    
    changedNode->setLeftChild(parent);
    parent->setRootNode(changedNode);
    
    return changedNode;
}
template<class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightRotation(BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getRightChild();
    
    parent->setLeftChild(changedNode->getLeftChild());
    
    changedNode->setRightChild(parent);
    parent->setRootNode(changedNode);
    
    return changedNode;
}
template<class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightLeftRotation(BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getRightChild();
    
    parent->setRightChild(leftRotation(changedNode));
    
    return rightRotation(parent);
}
template<class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftRightRotation(BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getLeftChild();
    
    parent->setLeftChild(rightRotation(changedNode));
    
    return leftRotation(parent);
}


#endif /* AVLTree_hpp */
