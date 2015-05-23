//
//  main.cpp
//  Break and Continue
//
//  Created by Chris Platika on 5/19/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

/* So that last little bit that were going to cover of basic looping are two useful calls that can be used to augment the way a loop works so first were going to look at break and then will look at continue. Here we go! */


/*
 * Break Example
 * Let's Uncomment this to see how it works!

int main() {
 
    // so lets start by building a loop. In this example I'm going to use a for loop...
    
    for(int i=0 ; i < 10 ; i++){
        
        cout << i << "\t" << "Driving!" << endl; // Lets set up some text to output via the course of the loop
        
        
        if (i == 4){ // Now were going to set up a condition to execute when i = 4
            
            
            break; // and here were going to use the break so when a break happens instead of returning to the loop it's going to jump to the end state!
            
        }
        
        cout << " \t Still Driving!" << endl; // So as long as i doesnt equal 4 we should see this string show up in the console.
        
    }
    
    cout << "!!!!CRASH!!!!" << endl; // But as soon as we reach 4 were gonna jumb down to the end here!
    
    
    
    return 0;
}

*/

/*
* Continue Example
* Once Again lets dive on in!
*
*/

/*
int main(){
    
    for(int i=0 ; i < 5 ; i++){ // we will start with a for loop again
        
        cout << i << "\t step" << endl; // so here is our initial console print
        
        
        if (i == 2){ // Were going to set up another if statement.
            cout << "!!!Jump!!!" << endl; // so if the conditions are met it will print this string
            continue; // and this time were going to use continue, now instead completeting down and printing skip were going to jump back up to the top and take an extra step.
            
        }
        cout << "\t skip" << endl;
        
    }
    
    cout << "Good Landing!" << endl;
    
    
    return 0;
}
*/

// Awesome! So now that we reviewed these two examples let's try to incorporate break into our guessing game code

int main () {
    
    const string thebestCompany="zudy"; // so let's go ahead and set up our answer again. Let's remember to set it up as a constant.
    
    string userInput; // we make the variable for the user input
    
    do { // were going to user our do while loop to set up the prompt
        cout << "Who is the best company? > " << flush;
        cin >> userInput;
        
        
        if (userInput == thebestCompany) { // now here were going to set up the break, so instead of having to check twice through the code we can use this to jump straight to the completed state
            break;
            
        }
        else {
            cout << "What! " << userInput << "?!" <<endl; // if they guess wrong we go down here to the else part of the if statement.
            cout << "Sorry Guess Again! \n" << endl;
            
        }
        
    }while (true); // and we set that up to loop indefinetly unless the correct guess is entered
    
    cout << "That's Right Zudy!" << endl; // we will only see this once the correct guess is made
    
    
    
    
    return 0; // go ahead and give this a run in your console :) 
    
}


