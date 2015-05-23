//
//  main.cpp
//  Floats
//
//  Created by Chris Platika on 5/18/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
#include <iomanip> // by adding this to our code were going to be able to manipulate our input output stream. I'll explain why a bit further down in the code
using namespace std;

int main(){
    int intValue = 6; // So as we've seen before we can use int to call whole numbers but watch what happens when we try to call a decimal.
    int brokeValue = 1.5; // Here I'll define an integer type object with a decimal value
    
    cout << intValue << endl; // Just like before when we call a whole int value it works flawlessly
    cout << brokeValue << endl; // look at this when we call this one it rounds the value down to 1.
    
    
    float floatValue = 1.23456; // To use decimals we will have to call a new type of class called a float.
    
    cout << fixed << floatValue << endl; //C++ supports displaying decimal values in a couple of different ways. Since we included iomanip we can choose what way we display it. We can display it as a fixed value...
    cout << scientific << floatValue << endl; // or we can use scientific notation. You may notice that we have some spare 0s tailing our decimal. We can actually manipulate that using a new function called setprecision()
    
    cout << setprecision(5) << fixed << floatValue << endl; // Here you can see we can set the precision to cut down to the first decimal value.
    cout << setprecision(15) << fixed << floatValue << endl; // We could also increase the decimal length...but look at those junk numbers!
    
    
    cout << sizeof(float) << endl; // However just like with Integers we have a limited memory amoutn. We can check to see how much memory is allocated to floats
    
    // We can also do something similar to long int with floats that will allow us to increase the precision of the decimal.
    
    cout << sizeof(double) << endl; // Here our are two options of call sizes notice the amount of memory they allow compared to basic float
    cout << sizeof(long double) << endl; // These values can actually differ on compiler and CPU so let's go around and take a look! 
    
    
    double dfloatValue = 1.2345678900000000000; // using the double call we can increase the amount of memory we assign to a float value.
    
    cout << setprecision(15) << fixed << dfloatValue << endl; //see how we don't get any junk numbers!
    
    
    long double lfloatValue = 1.2345678901234560; // we can even go larger using the long double call.
    
    cout << setprecision(16) << fixed << lfloatValue << endl; //the one thing to note with floats is there is no signer call so we can't declare a float positive or negative.
    

    
    
    
    
    return 0;
}

