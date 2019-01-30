//
//  DataController.cpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 1/28/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#include "DataController.hpp"

void Controller :: start()
{
    cout << "Welcome to the Data Structures App." << endl;
    usingNodes();
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
