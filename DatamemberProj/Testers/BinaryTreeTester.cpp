//
//  BinaryTreeTester.cpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 4/12/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: treeStuff()
{
    testTree.insert(7);
    testTree.insert(1);
    testTree.insert(24);
    testTree.insert(6);
    testTree.insert(66);
    testTree.insert(5);
    testTree.insert(25);
    testTree.insert(4380);
    testTree.insert(99);
    testTree.insert(9001);
    testTree.insert(101);
    
    testTree.inOrderTraversal();
    testTree.preOrderTraversal();
    testTree.postOrderTraversal();
    
    moreTree.insert("cat");
    moreTree.insert("dog");
    moreTree.insert("fish");
    moreTree.insert("bunny");
    moreTree.insert("bird");
    moreTree.insert("lizard");
    moreTree.insert("ferret");
    moreTree.insert("hamster");
    
    moreTree.inOrderTraversal();
    moreTree.preOrderTraversal();
    moreTree.postOrderTraversal();
}
