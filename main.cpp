//
//  main.cpp
//  Area
//
//  Created by Carrie Ward on 3/25/17.
//  Copyright © 2017 Carrie Ward. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // create variables
    int length, width, area;
    
    // request user input
    cout << "Enter the length and width seprated by a space: \n";
    
    // store user input
    cin >> length >> width;
    
    // find the area of a rectangle
    area = length * width;
    
    // dislay the results
    cout << "\nThe area of a rectangle with length " << length << " and width " << width << "\nis " << area << " units squared.\n\n";
    
    return 0;
}
