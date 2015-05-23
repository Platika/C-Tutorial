//
//  main.cpp
//  comparing floats
//
//  Created by Chris Platika on 5/18/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
#include <iomanip> //Were going to add the input output manipulator again so we can use it a bit further down.
using namespace std;

//So now that we've learned about basic IF type statments lets return to floats for a second.
int main() {
    
    float value1 = 1.6; // lets create a float and assign it a value
    
    if(value1 == 1.6){ // Now lets create an if statement that compares the value to itself
        
        cout << "the float is equal!" << endl;
    }
    else{
        
        cout << "the float is not-equal!" << endl;
    } // What does the console say! Surprised Right! try a couple different values and see if you get different results!
    
    cout << value1 << endl; // Let's double check that our value is being assigned
    
    cout << setprecision(20) << fixed << value1 << endl; // Aww Snap! There's our issue floats aren't a precise number type since they only hold a finite amount of memory. So if were going to use them for comparison its better to rely on the < or > operators.
    
//lets rewrite our if else statement with that in mind.
    
    if (value1 < 1.65){
        
        cout << "The float is less then 1.65!" << endl;
    }
    else{
        
        cout << "The float is greater then 1.65!" << endl; // let's try running now, and go ahead and try changing the value.
    }
    //this is just something to keep in mind when using floats
    
    
    
    return 0;
}
