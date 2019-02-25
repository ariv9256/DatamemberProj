//
//  LinearTester.hpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 2/13/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#ifndef LinearTester_hpp
#define LinearTester_hpp

#include <iostream>
#include "../Controller/Tools/Timer.hpp"
#include "../Controller/FileController.hpp"

#include "../Model/Linear/LinkedList.hpp"
#include "../Model/Linear/Stack.hpp"
#include "../Model/Linear/Queue.hpp"
#include "../Model/Linear/Array.h"

using namespace std;

class LinearTester
{
public:
    void testVsSTL();
    void testVsStack();
    void testVsQueue();
    void testVsDouble();
};


#endif /* LinearTester_hpp */
