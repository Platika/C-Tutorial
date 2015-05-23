//
//  main.cpp
//  Sizeof Arrays
//
//  Created by Chris Platika on 5/19/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    
    int value = 34; // So if you remember yesterday we talked about the Sizeof operator which allows us to display the size of anything in bytes.
    
    cout << sizeof(value) << endl; //we can use it on variables
    cout << sizeof(int) << endl; // we can use it on classes
    
    int sizeArray[] = { 1, 2, 3, 4}; // so lets test this out on an array.
    
    cout << sizeof(sizeArray) << endl; // notice how since the array is comprised of integer elements we can see that each element takes up about 4 bytes.

/* We Can Go ahead and test this by creating a for statement that will step through the array based on the amount of bytes */
    
    for(unsigned int i = 0; i < sizeof(sizeArray)/sizeof(int) ; i++){ // In order to do this test what were going to do is create an incrementing variable and then compare it to the byte size of the array devided by the byte size of int. basically its going to be i < (16/4). Which is pretty nifty since this gives us a flexible way to step through an array.
        
        cout << sizeArray[i] << " " << flush; // let's print out the array values to make sure it working right!
        
        
        
        
    }
    cout << endl; // Pretty Cool! Now Let's see if we can do it with a multi-demensional array! 
    
    
    
    
    
    
    return 0;
}
