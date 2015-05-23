//
//  main.cpp
//  For Loops
//
//  Created by Chris Platika on 5/19/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

/* Now were going to look at one of the most commonly used type of loops in C++ this loop is called a For loop. They're are a bit more complicated then the other loops that we have looked at thus far but I'm sure you will see why they're so powerful. So let's dive into them!for loops are set up like so:
    
 for (initial condition; condition to be met; step to take){}
     
  So this is going to look pretty smiliar to what we've learned so far the one major difference you probably have already notices is that it's condition is seperated into 3 parts so lets look at how this can work
 
 */



int main() {
    
    /* So lets start of with a pretty common for loop, you're going to notice that were able        to condese some of the steps that we did with our while loop. So the condition for this one that we set up is we set  an counter variable to 0; we're telling it to execute as long as i is less than 10; and each time through its going to add 1 to i (i++ is the same as saying i = i + 1) */

    for (int i=0 ; i < 10 ;  i++){
        
        
        cout << i << "\t Tick" << endl; // lets print i so we can see how it increments along with some text
    
    }
        
    
    /* remember though any variable that is only declared inside of loop isn't accessible outside of the loops {} so if we try to call
     i down here whatch what happens! */
    
    
    // cout << "This is i:" << i << endl; // uncomment this code to see.
    
    
    
    
    
    return 0;
}
