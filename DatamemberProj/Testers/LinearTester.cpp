//
//  LinearTester.cpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 2/13/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/ariv9256/Documents/C++ Projects/DatamemberProj/DatamemberProj/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/ariv9256/Documents/C++ Projects/DatamemberProj/DatamemberProj/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout<<"This is the STL Read timer: "<<endl;
    crimeTimerSTL.displayInformation();
    cout<< "This is the OOP Node oend now: "<<endl;
    crimeTimerOOP.displayInformation();
    cout<< "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    musicSTL.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/ariv9256/Documents/C++ Projects/DatamemberProj/DatamemberProj/Resources/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/ariv9256/Documents/C++ Projects/DatamemberProj/DatamemberProj/Resources/music.csv");
    musicOOP.stopTimer();
    
    cout<< "THis is the STL Read time: " << endl;
    musicSTL.displayInformation();
    cout<<"This si the OOP Node Read Time"<< endl;
    musicOOP.displayInformation();
    cout<< "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
}
