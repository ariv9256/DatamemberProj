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

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataToVector(string filename);
}

#endif /* FileController_hpp */
