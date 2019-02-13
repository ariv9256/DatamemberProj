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
    Timer crimeTimerStl, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimer.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("");
    crimeTimerOOP.stopTimer();
    
    crimeTimerSTL.displayInformation();
    crimeTimerOOP.displayInformation();
    cout<< "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
}
