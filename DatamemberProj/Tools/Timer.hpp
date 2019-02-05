//
//  Timer.hpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 2/5/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <iostream>
#include <time.h>
#include <assert.h>

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
};

#endif /* Timer_hpp */
