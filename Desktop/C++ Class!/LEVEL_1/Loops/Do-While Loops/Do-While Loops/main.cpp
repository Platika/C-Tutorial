//
//  main.cpp
//  Do-While Loops
//
//  Created by Chris Platika on 5/19/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

/* So a Do - While loop is pretty similar to what we saw with a while loop. The one major difference is a Do while loop can execute a comman prior to checking conditions. So what do I mean by that? Well let's recreate our company guessing game example
 */


int main() {
    
    const string thebestCompany = "zudy"; // This time were going to set our answer to be a const. This means that unlike other variables we won't be able to change this value in the code.
    
    string userInput; // Next we declare the variable that will hold the user input, just like in the earlier example. It's important to declare it here so we can use it inside the do while loop!
    
    do { // Now here is where we start changing it up. were going to take advantage of the fact that do can run at least once. We're going to place the prompt and the user input right into here.
        
        cout << "What is the Best Company? >" << flush;
        cin >> userInput;
        
        if(userInput != thebestCompany){ // Now were going to creat an if the user guess was wrong we can give them a message to guess again.
            
            cout << "What! " << userInput << "?" << endl; //we can double check here and make sure the user input is working
            cout << "Sorry! Guess Again! \n" << endl;
            
            
        }

    
    }
    while(userInput != thebestCompany); // we then use last part of the do while loop to create the condition that this code will loop until the user guesses the right answer.
    
    
    cout << "That's Right Zudy!" << endl; // we can place a final statement after the while loop so if they guess correct they get a different response.
    
    
    return 0;
}
