//
//  main.cpp
//  If-Else-If
//
//  Created by Chris Platika on 5/18/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

// So were going to start by grabbing the menu and prompts we made from our previous example

int main() {

    cout << "1.\t Create New Account" << endl;
    cout << "2.\t Delete Account" << endl;
    cout << "3.\t View Account" << endl;
    cout << "4.\t Search Records" << endl;
    cout << "5.\t Quit \n" <<endl;
   
    cout << "Enter Your Choice > " << flush;
    
    int userInput;
    cin >> userInput;
    
// So as we saw with the last example we could use an if else statement to handle two different states but thats not really optimal for something like this menu that has 5 options so the way we can create something that will work for all our stated conditions is by using an if-else-if statement
    
    if(userInput == 1){ //We go about doing this by creating a regular if style statement and lets assign this one to search for the condition where the input equals 1
        
        cout << "Creating New Account" << endl;
        
    }
    else if(userInput == 2){ // Now here is our new gem! Instead of a simply giving an if else statement were going to use the else if. This allows us to add another conditional parameter!
        cout << "Deleting Account" << endl;
        
    }
    else if(userInput == 3){ // we can use this type of else if until we have an if statement for all our menu options
        
        cout << "Viewing Account" << endl;
        
    }
    else if(userInput == 4){
        
        cout << "Searching Records" << endl;
        
    }
    else if(userInput == 5){
        
        cout << "Quitting!" << endl;
        
    }
    else{ // we can then end this program with an else statement that incorporates any other possible entry for user input. 
        
        cout << "Invalid Entry!" << endl;
    }

    


    return 0;
}