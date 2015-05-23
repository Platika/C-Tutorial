//
//  main.cpp
//  User Input
//
//  Created by Chris Platika on 5/18/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    
    cout << "Enter Your Name: " << flush; // So as we have seen in our earlier examples C out is used to push values out, but what if we want to have users input values? We can do that by using C input function.
    
    string input; // First we have to set up a value that will hold what the user inputs in the console since were declaring it a string it will hold a text input!
    
    cin >> input; // Here we tell C In that we what it to extract what is typed in and place it into the input value.
    
    cout << "You entered: " << input << endl; // Here you can see how it worked in the console.
    
    int value; // we can also use C In to take other values such as integers
    
    cout << "Enter A Number: " << flush; // We can create a prompt just like we created the earlier one
    
    cin >> value; // We can input a new value
    
    cout << "The Number You Picked: " << value << endl; // And we can export that value as well!
    
    
    
    
    
    return 0;
}


