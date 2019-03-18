//
//  GraphTester.hpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 3/18/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include <iostream>
#include "../Model/NonLinear/Graph.hpp"

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
public:
    void testGraphs();
};

using namespace std

template<class Type>
Graph<Type> :: Graph()
{
    this-> vertexCount = 0;
    
    for(int index = 0; index < MAXIMUM; index++)
    {
        int * row = weightCostMatrix[index];
        std::fill_n(row, MAXIMUM, 0);
    }
}
#endif /* GraphTester_hpp */
