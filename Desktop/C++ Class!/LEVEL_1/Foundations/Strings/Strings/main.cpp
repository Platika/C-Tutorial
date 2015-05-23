//
//  main.cpp
//  Strings
//
//  Created by Chris Platika on 5/18/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;


int main (){
    
    string aString = "This is a string! Huzzah!"; // Variables can come in all sorts including one we have been working with Strings! Strings are text values. What were doing here is a bit different then what we did with an integers. Here were actually creating an object named aString with a class of string.
    
    cout << aString << endl; //we can call the object just like we did with the integers
    
    string anotherString = " Look another one!"; // Here I'll create another object that is also a string
    
    cout << aString << anotherString << "CALLED WITH BOTH OBJECTS" << endl; // We can link them together in the same line by calling both of them
    
    string bothStrings = aString + anotherString; // Or We can create a seperate object that concatonates both values
    
    cout << bothStrings << "CALLED WITH NEW OBJECT" << endl; // Check the console to see how this works!
    
    
    
    return 0;
}
