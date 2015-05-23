//
//  main.cpp
//  While Loops
//
//  Created by Chris Platika on 5/19/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

/* Now were going to look at creating loops. Were going to start off by looking at the while loop. You may notice that the while loop looks very similar to our IF statement, and it is! while requires a condition to run and will continue to execute code while that condition is true.  We'll look at how loops work and ways of incrementing them!
 */

/* 
 
Uncomment this code to test an infinite loop!
int main() { // The first example were looking at is dangerous loop since its an infinite loop! But it's good to see how the while loop will work
    
    while(true){ // We start this loop the same way as the IF statement. In this case the conditintion is set to the value of true, so its always true
        cout << "Hello World!" << endl; // and here is what will be executed. Check the console to watch what happens.
        
    }
    
    
    return 0;
}
 
*/

int main(){ // So now here lets look at a proper way of implementing a while loop
    
    int i= 0; // first were going to set up a variable that were going to use to increment and control the while loop
    
    while (i <= 5){ // now we set up the condition for the while loop in this case the loop will run until i is equal to 5. Since we set i to 0 we know its going to execute the while loop six times.
        
        cout << i << "\t"<<  "Vroom!!!" << endl; // we will have it print some text so you can track it in the console
        
        i = i + 1; // and now we will have it increment by 1. We do this by setting i equal to i + 1.
        
    }// once the while loop has been satisfied we can have it run some more code, we will do some more advanced example when we get to nested loops
    cout << "And there off!" << endl; // lets just have it run an end statement.
    
    
    return 0;
}