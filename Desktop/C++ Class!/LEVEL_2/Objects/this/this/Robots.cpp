
//
//  Robots.cpp
//  this
//
//  Created by Chris Platika on 5/23/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include "Robots.h"
#include <iostream> // So let's go ahead and set up this file just like we did with our last one
#include <sstream> // include string stream so we can output our formatted values



Robots :: Robots(){ // Here is our default constructor
    
    name = "Proto";
    powerLevel = 0;
    color = "Red";
    
    
    
}

Robots :: Robots(string name, int powerLevel,string color){ // Now here is our constructor that is going to except arguments.
    
    this -> name = name; // And here is our look at the this pointer. Using this we can set a value defined within a an object and assign it to the specific point in the computers memory.
    this -> powerLevel = powerLevel;
    this -> color = color;
    
    cout << "The Size of This is :" << sizeof(this) << endl; // we can even check the byte size of our object
    cout << "The Location of This is: " << this << endl; // and memory location it's assigned to, this will be displayed hexadecimally.
    
}

string Robots :: toString(){
    
    stringstream ss;
    
    ss << "\nROBOT INFO" << endl;
    ss << "================ \n";
    ss << "Name: ";
    ss << name;
    ss << "\nPower Level: ";
    ss << powerLevel;
    ss << "\nColor: ";
    ss << color;
    ss << "\n" << endl;
    
    
    return ss.str();
    
    
}