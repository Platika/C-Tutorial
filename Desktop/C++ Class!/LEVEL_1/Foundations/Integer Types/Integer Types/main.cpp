//
//  main.cpp
//  Integer Types
//
//  Created by Chris Platika on 5/18/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
#include <limits> // So by default primitive values have a fixed memory limit. We can see those limits by including the limit values in our code
using namespace std;



int main(){
    
    int smallNum = 400; // Here is a standard int value like the one we used earlier
    //int tooBig = 99999999999999999999999999; // Notice what happens when we try to run the code with this value
    
    cout << smallNum << endl;
    //cout << tooBig << endl;
    
    cout << "Max int value: " << INT_MAX << endl; // Here we can view what the maximum integer value is
    cout << "Min int value: " << INT_MIN << endl; // Here is the minimum value notice its not the same as the max value
    
    long int bigNum = 912931929312; // by changing the class of int that were calling we can now input a much larger number
    
    cout << bigNum << endl; // Notice how this runs no problem :)
    
    //If we look at the various types of int we can see how much space of internal memory were assiging to it
    
    cout << "Size of short int: " << sizeof(short int) << endl; // Remember these sizes are in bytes!
    cout << "Size of int: " << sizeof(int) << endl; // what interesting to note is that these are signed values. What that means is that they can all be either positive or negative. However one bit of memory is used to store if its a positive or negative value
    cout << "Size of long int: " << sizeof(long int) << endl;
    
    unsigned int posiNum = 300; // We can actually notate that we don't want to track positive or negative value by using an unsigned int. This gives you that one extra bit of space, but means you can only give a positive number.
    
    cout << posiNum << endl;
    
    cout << posiNum - 301 << endl; //notice how this breaks the value!
    
    
    
    
    return 0;
}