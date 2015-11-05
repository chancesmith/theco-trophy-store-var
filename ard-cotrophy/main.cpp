//
//  main.cpp
//  ard-cotrophy
//
//  Created by Chance Smith on 11/5/15.
//  Copyright © 2015 Chance Smith. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>
//#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    using namespace std;
    int seconds = 0, stage = 1;
    
    ifstream infile;
    ofstream outfile;
    infile.open ("/Users/chester911cross/work-in-progress/ard-cotrophy/ard-cotrophy/event.txt");
    
    // retrieve single/only line (number of seconds left in the count down)
    if (infile.is_open())
    {
        infile>>seconds;
        cout << seconds;
        seconds = seconds - 1;
        cout <<" "<<seconds;
        infile.close();
        stage = 2;
    } else {
        cout << "couldn't open file";
    }
    
    if (stage == 2) {
        // insert new seconds
        outfile.open ("/Users/chester911cross/work-in-progress/ard-cotrophy/ard-cotrophy/event.txt");
        if (outfile.is_open())
        {
            outfile<<fixed<<setprecision(0);
            outfile << seconds;
            outfile.close();
        } else {
            cout << "couldn't open file";
        }
    }
}
