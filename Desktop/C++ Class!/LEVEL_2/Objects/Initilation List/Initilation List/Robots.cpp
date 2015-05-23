
//
//  Robots.cpp
//  this
//
//  Created by Chris Platika on 5/23/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include "Robots.h"
#include <iostream> 
#include <sstream>



Robots :: Robots(){ // Here is our default constructor
    
    name = "Proto";
    powerLevel = 0;
    color = "Red";
    
    
    
}

Robots :: Robots(string name, int powerLevel,string color){
    
    this -> name = name;
    this -> powerLevel = powerLevel;
    this -> color = color;
  
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