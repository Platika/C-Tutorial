//
//  Robots.h
//  this
//
//  Created by Chris Platika on 5/23/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#ifndef __this__Robots__
#define __this__Robots__

#include <stdio.h>
#include <iostream>

using namespace std;

class Robots{
private:
    
    string name;
    int powerLevel;
    string color;
    
    
    
public:
    
    Robots();
    Robots(string name, int powerLevel, string color);
    string toString();
    
    
    
    
    
};

#endif /* defined(__this__Robots__) */
