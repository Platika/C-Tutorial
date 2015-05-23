//
//  main.cpp
//  Switch
//
//  Created by Chris Platika on 5/19/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

/* Switch is operator that is fairly unique to object based languages, and it can be really useful in certain situations. It's going to look a little complicated, but its actually really simple once we break it down! */


int main() {
    
    int switchValue = 4; // let's go ahead and create a variable. Switch is limited to pretty much just working with integers so lets make a an int variable
    
    switch (switchValue) { // Now were going to go ahead and call the switch statement. This is going to be pretty similar to how we call an IF Statement.
        case 4: // Now with a switch we can designate specific cases so in this case if switchValue is equal to 4 do this case...
            cout << "The Value is 4!\n" << endl;
            
            break; // at the end of each case we need to include the break command or else the CPU will continue to print out the next case.
            
        case 5:
            cout << "The Value is 5\n!" << endl;
            
            break;
            
            
        
        default: // We end a switch call with a default case. the default case is only ever reached if none of our stated cases are met. You can think of this as a catch all case.
            
            cout << "I don't know I give up!\n" << endl;
            
    }
    
    // We can combine this with our new knowledge of Arrays to create a revamped console menu
    
    
    cout << "THE FANCY MENU" << endl; // lets give the menu a title.
    cout << "============== \n" << endl;
    
    string menuOptions[] = { "New Record", "Delete Record", "View Record", "Quit" }; // Let's go ahead and create an simple Array
    
    for (int i = 0; i < sizeof(menuOptions) / sizeof(string); i++){ // Now we use a for loop to step through the Array and construct our menu, were going to use sizeof in case we ever want to add more options to the menu.
        
        cout <<"# " << i+1 << "\t " << menuOptions[i] << endl; //notice how I add 1 to i to make it print starting at 1.
        
    } // Let it run we have a pretty sick menu! Now lets set up the User prompt and cases
    
    cout << "\nEnter Your Selection >" << flush; // Here is our console prompt just like before
    
    int userInput; // here is our int variable for our user entry
    
    cin >> userInput; // here is our user input going into the variable! Now lets make our switch cases
    
    switch(userInput){ // Where going to set our switch to run on the condition of a user input.
            
        case 1: // if the user enters 1...
            cout << "Adding New Record...." << endl;
            
            break; // don't forget to include breaks
        case 2: // if the user enters 2...
            cout << "Deleting Record...." << endl;
            
            break;
            
        case 3:// if the user enters 3...
            cout << "Viewing Record...." << endl;
            
            break;
            
        case 4: // if the user enters 4...
            cout << "Quitting..." << endl;
            
            break;
            
        default: // if the user enters something that is not one of our cases.
            cout << "Invalid Selection! \n" << endl;
            cout << "Shutting Down" << endl;
            
    }
    
    cout << endl; // Now give it a run!
    
    return 0;
}
