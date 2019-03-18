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

#endif /* GraphTester_hpp */
