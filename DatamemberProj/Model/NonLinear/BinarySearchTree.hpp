//
//  BinarySearchTree.hpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 4/12/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <iostream>
#include "Tree.hpp"

using namespace std;

template<class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    void destroyTree(BinaryTreeNode<Type> * node);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
};
/*
 * Have to incorporate stubs from tree class
 * This is the informational method supporter stubs below
 */
template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return -1;
}
template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    return -1;
}
template<class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    return false;
}
template<class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return false;
}
//Traversal Stubs below
template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    
}
template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    
}
template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    
}
#endif /* BinarySearchTree_hpp */
