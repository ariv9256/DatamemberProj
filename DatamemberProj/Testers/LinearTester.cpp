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
    
    cout<< "This is the STL Read time: " << endl;
    musicSTL.displayInformation();
    cout<<"This is the OOP Node Read Time"<< endl;
    musicOOP.displayInformation();
    cout<< "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
    
    int randomIndex = rand() % moreCrimes.getSize();
    
    crimeTimerSTL.startTimer();
    crimes[randomIndex];
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerOOP.stopTimer();
    
    cout<<"This is the STL random retrieval: " <<endl;
    crimeTimerSTL.displayInformation();
    cout<<"THis is the OOP Node random retrieval: "<<endl;
    crimeTimerOOP.displayInformation();
    cout<<"A difference of: "<<crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds()<<" microseconds" <<endl;
    
    randomIndex = rand() % musicList.getSize();
    
    musicSTL.startTimer();
    tunez[randomIndex];
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    musicList.getFromIndex(randomIndex);
    musicOOP.stopTimer();
    
    cout<<"This is the STL random retrieval: " <<endl;
    musicSTL.displayInformation();
    cout<<"THis is the OOP Node random retrieval: "<<endl;
    musicOOP.displayInformation();
    cout<<"A difference of: "<<musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds()<<" microseconds" <<endl;
    
   
}
void LinearTester :: testVsStack()
{
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/ariv9256/Documents/C++ Projects/DatamemberProj/DatamemberProj/Resources/crime.csv");
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/ariv9256/Documents/C++ Projects/DatamemberProj/DatamemberProj/Resources/crime.csv");
    
    Stack<CrimeData> crimeStack;
    
    for(int index = 0; index < 10; index++)
    {
        crimeStack.push(crimes[index]);
        cout<< crimes[index] <<endl;
    }
    
}
void LinearTester :: testVsQueue()
{
    vector<Music> tunez = FileController :: musicDataToVector("/Users/ariv9256/Documents/C++ Projects/DatamemberProj/DatamemberProj/Resources/music.csv");
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/ariv9256/Documents/C++ Projects/DatamemberProj/DatamemberProj/Resources/music.csv");
    
    Queue<Music> musicQueue;
    
    for(int index = 0; index < 10; index++)
    {
        musicQueue.add(tunez[index]);
        cout<< tunez[index] << endl;
    }
}
void LinearTester :: testVsDouble()
{
    Timer crimeTimerSLL, crimeTimerDLL;
    
    crimeTimerSLL.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/ariv9256/Documents/C++ Projects/DatamemberProj/DatamemberProj/Resources/crime.csv");
    crimeTimerSLL.stopTimer();
    
    crimeTimerDLL.startTimer();
    CircularList<CrimeData> circleCrime = FileController :: readDataToCircle("/Users/ariv9256/Documents/C++ Projects/DatamemberProj/DatamemberProj/Resources/crime.csv");
    crimeTimerDLL.stopTimer();
    
    cout << "This is the Single Linked List read time: " << endl;
    crimeTimerSLL.displayInformation();
    cout << "This is the Double Linked List read time: " << endl;
    crimeTimerDLL.displayInformation();
    cout << "A difference of: " << crimeTimerDLL.getTimeInMicroseconds() - crimeTimerSLL.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerSLL.resetTimer();
    crimeTimerDLL.resetTimer();
    
    int randomIndex = rand() % moreCrimes.getSize();
    
    crimeTimerSLL.startTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerSLL.stopTimer();
    
    crimeTimerDLL.startTimer();
    circleCrime.getFromIndex(randomIndex);
    crimeTimerDLL.stopTimer();
    
    cout << "This is the Single Linked List read time: " << endl;
    crimeTimerSLL.displayInformation();
    cout << "This is the Double Linked List read time: " << endl;
    crimeTimerDLL.displayInformation();
    cout << "A difference of: " << crimeTimerDLL.getTimeInMicroseconds() - crimeTimerSLL.getTimeInMicroseconds() << " microseconds" << endl;
}
