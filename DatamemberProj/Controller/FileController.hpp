//
//  FileController.hpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 2/5/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <iostream>
#include "../Resources/Music.hpp"
#include "../Resources/CrimeData.hpp"
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include "../Model/Linear/Array.h"
#include "../Model/Linear/LinkedList.hpp"
//#include "..Model/NonLinear/BinarySearchTree.hpp"

using namespace std;

class FileController
{
public:
    //Built in STL data structures
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataToVector(string filename);
    //OOP Array
    static Array<Music> musicDataToArray(string filename);
    //LinkedLists
    static LinkedList<CrimeData>readDataToList(string filename);
    static LinkedList<Music> musicDataToList(string filename);
    //BST
//    static BinarySearchTree<CrimeData> readDataToTree(string filename);
//    static BinarySearchTree<Music> musicDataToTree(string filename);
};

#endif /* FileController_hpp */
