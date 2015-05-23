//
//  main.cpp
//  If Else Statements
//
//  Created by Chris Platika on 5/18/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

// So now were going to build upon what we saw with the if statment for this example were also going to use some other forms of evalution as well . Instead of just using the == to check if a value is equal to one another we will use < and > to see how we can evaluate a range of inputs.

int main() {

// First Let's Build a Simple Table to Output in the console
    cout << "1.\t Create New Account" << endl; // Here is a simple table example that we've made you may notice the \t that allows us to use a tab inside our string. Theres a couple different cool things we can do how we display our text
    cout << "2.\t Delete Account" << endl;
    cout << "3.\t View Account" << endl;
    cout << "4.\t Search Records" << endl;
    cout << "5.\t Quit \n" <<endl;// we could \n to create a new line \" to place an object inside a string in quotes
    
// Now Let's Create our prompt for our user
    
    cout << "Enter Your Choice > " << flush; // This is the same as in the previous example that we made notice how I used \n to give me a little space between our last option and this input prompt.
    
// lets create our variable to store the user input
    
    int userInput;
    cin >> userInput;
    
    // cout << userInput << endl; // We can always double check and see if the user input is working remember we set this one to only accept an int value! give it a try by uncommenting this line of code
    
// Now were going to move onto building our if statement
    
    if(userInput < 3){ // Here were going to create an if statement that will run if the value the user entered is less then 3.
        
        cout << "\nUser Action is Not Allowed" << endl; // Will use a new line break and have it show this text as a prompt
    }
    else { // Now Were Going to Look at the else case. So if the conditions that we entered above are not met we can have it execute this other code. So in this examples case any user input that is 3 and >3 will be approved.
        
        cout << "\nApproved!" << endl; // and here is the line of code we will have it run to show that it's approved.
        
    } // The one thing to keep in mind is that a simple if else statement really only evaluates to two seperate states so try typing a number out of our menu range and see what happens. We can get around this by adding other statements or modifying the conditions to our exisiting state

    if (userInput == 3){ // We can  add a specific if statement to evaluate after our other if else statement. 
        
        cout << "View Accounts Not Avaliable" << endl; // We will dive a little further into this in our next example!
        
    }
    
    
    
    return 0;
}


