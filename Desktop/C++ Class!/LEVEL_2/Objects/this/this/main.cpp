//
//  main.cpp
//  this
//
//  Created by Chris Platika on 5/23/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

/* Were doing great and were almost done with level 2! I want to give you a sneak peak of pointers and memory something that were going to be focusing in on at level 3. Let's create another version of our profile program that we made for the last example. */

#include <iostream>
#include "Robots.h" // Don't forget to link the header file.

using namespace std;


int main() {
    
    Robots proto;
    
    cout << proto.toString();
    
    Robots mega("Mega-Man", 100, "Blue");
    
    cout << mega.toString();
    
    cout << "The Memory location of Mega is " << &mega << endl; // we can even check to see the address memory just to double check where it assigned
    
    
    Robots bass("Bass", 50, "Purple");
    
    cout << bass.toString();
    
    cout << "The Memory location of Bass is " << &bass << endl; // each object is given a different location in the objects memory. 
   
    
    
    return 0;
}
