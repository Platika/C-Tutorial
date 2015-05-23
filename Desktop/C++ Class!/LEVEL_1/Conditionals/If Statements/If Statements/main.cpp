//
//  main.cpp
//  If Statements
//
//  Created by Chris Platika on 5/18/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    // So now were going to move onto a crucial building block for all programming langauges the if statement. For this example were going to make an input field that accepts a specific answer.
    
    string thebestCompany = "zudy"; // we start by creating a variable that will hold the answer were looking for
    
    cout << "What is the Best Company?: " << flush; // we will create a prompt that will show up in the console.
    
    string userInput; // Now just like in the earlier example were going to create a variable to store the user input.
    
    cin >> userInput; // Here we will use the the C In command to capture the user types and assign it to the user input variable.
   
    cout << userInput << endl; // We can double check by having it spit out what ever we entered right here.
    
    
    // Now lets create our If Statement, the structure of these type of statement is going to look very familar to what weve been doing in main! the whole way it works is if(condition to be met){code to execute} so lets build out our statement down below
    
    if(userInput == thebestCompany){ //unlike when we assign a value we will use a == to check and see if the values are they same
        
        cout << "Thats Right!!!" << endl; //this is the code that will execute if the user input matches our answer
        
    }
    
    if (userInput != thebestCompany){ // using the != we can create another statement for when the user inputed value does not match our answer
        
        cout << "NOOOOOOOOOOOOO!!!!!" << endl; //once again we state what code we want to execute if the condition is not met
    }
    
    
    
    
    
    return 0;
}
