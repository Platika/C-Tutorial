//
//  main.cpp
//  Variables
//
//  Created by Chris Platika on 5/18/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int power_level = 11000; // So a variable gives us a way to call a "non-static" value. We have to tell the system what type of variable we are working with in this case its an integer (whole number) so we declar it as an "int"
    int powerLevel = 9000; // both examples show naming conventions for variables. You always want to make sure you make your variable names as descriptive as possible so it's easier to tell what you're doing with them.
    
    cout << "Vegeta: My power level is" << " " << powerLevel << endl; //notice how we can call these variables with our earlier static strings! Pretty Cool! Right! Guys...
    cout << "Chris: Well mine is " << power_level <<endl; //look how we can each variable seperately we can take this a step further
    cout << "The Total Power Level: " << power_level + powerLevel << endl; // we can add variables together!
    
    power_level = power_level + 3000; // we can also change the value of a variable through the course of program pretty nifty!
    
    cout << "Vegeta: Now My Power Level is " << power_level << endl; //notice what happens when we call the variable again!
    
    int totalPowerlevel = power_level +powerLevel; // We can also create a variable that utilizes other variables
    
    cout << "The New Total Power Level is " << totalPowerlevel << endl; // check out how it now supports the updated values
    
    
    
    return 0;
}
