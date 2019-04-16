//
//  DataController.cpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 1/28/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#include "DataController.hpp"
#include "FileController.hpp"

void Controller :: start()
{
    cout << "Welcome to the Data Structures App." << endl;
//    usingNodes();
    //testFiles();
    //testLinear();
//    testGraphs();
}

void Controller :: usingNodes ()
{
    Node<int> mine(50);
    Node<string> wordHolder("words can be stored too :)");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replace text");
    cout << wordHolder.getData()<<  endl;
}
void Controller :: testFiles()
{
    vector<Music> musicVector = FileController :: musicDataToVector("/Users/ariv9256/Documents/C++ Projects/DatamemberProj/DatamemberProj/Resources/music.csv");
    for(int index = 234; index < 255; index++)
    {
        cout << index << ": contents are: " << musicVector[index] << endl;
    }
    vector<CrimeData> crimeVector = FileController :: readCrimeDataToVector("/Users/ariv9256/Documents/C++ Projects/DatamemberProj/DatamemberProj/Resources/crime.csv");
    for(int index = 234; index < 255; index++)
    {
        cout << index << ": contents are: " << crimeVector[index]<< endl;
    }
}
void Controller :: testLinear()
{
    LinearTester lookAtThis;
    lookAtThis.testVsSTL();
    lookAtThis.testVsQueue();
    lookAtThis.testVsDouble();
}
void Controller :: testGraphs()
{
    GraphTester lookieHere;
    lookieHere.testGraphs();
}
