//
//  main.cpp
//  Area - a program that computes the area of a rectangle
//
//  Created by Carrie Ward on 3/25/17.
//  Copyright © 2017 Carrie Ward. All rights reserved.
//

#include <iostream>
#include <iomanip>
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
    cout << "\nThe area of a rectangle with length " << length << " and width "
         << width << "\nis " << area << " units squared.\n\n";
    
    // other ways to display results
    cout << setw(5) << length << endl
         << setw(5) << width << endl
         << "-----\n"
         << setw(5) << area << endl;
    
    // formatting output
    cout << "\n|" << setw(10) << fixed << setprecision(3) << area << "|";
    cout << "\n|" << setw(10) << setiosflags(ios::left) << area << "|";
    
    // output length value in other bases such as hex and oct
    int baseLength = length;
    cout << "\n\nDecimal (base 10) value of length: " << baseLength << " is " << baseLength << endl;
    cout << "\nThe octal (base 8) value of length: "  << baseLength << " is " << showbase << oct << baseLength << endl;
    cout << "\nThe hexidecimal (base 16) value of length: " << baseLength << " is " << showbase << hex << baseLength << endl;
    
    
    
    
    cout << "\n\n";
    return 0;
}
