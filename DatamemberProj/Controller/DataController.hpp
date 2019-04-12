//
//  DataController.hpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 1/28/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#ifndef DataController_hpp
#define DataController_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Model/Nodes/DoubleNode.hpp"
#include "../Model/Nodes/LinearNode.hpp"
#include "../Model/Linear/CircularList.hpp"
#include "../Resources/Music.hpp"
#include "../Resources/CrimeData.hpp"
#include "../Testers/LinearTester.hpp"
#include "../Testers/GraphTester.hpp"
#include "../Testers/BinaryTreeTester.hpp"
#include <string>
#include <fstream>
#include <vector>
#include <sstream>


using namespace std;

class Controller
{
private:
    void usingNodes();
public:
    void start();
    void testFiles();
    void testLinear();
    void testGraphs();
};
#endif /* DataController_hpp */
