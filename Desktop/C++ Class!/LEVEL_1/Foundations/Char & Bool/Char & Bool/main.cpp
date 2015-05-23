//
//  main.cpp
//  Char & Bool
//
//  Created by Chris Platika on 5/18/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

// So we have seen floats and ints now were going to look at two other types...

int main() {
    
    bool bValue = true; // Bool is short for Boolean which is a logical data type it suppports a value of either True or False
    
    cout << bValue << endl; // notice how the computer stores the true value type as 1, instead of giving us true back.
    
    
    bValue = false; // lets go ahead and change the value to false.
    
    cout << bValue << endl; // as your probably guessed when we changed the value to false it is stored as 0.
    
    
    char cValue = 64; // char is a strange one! Char refers to ASCII table values you can go check on google to find the values
    
    cout <<"The Char entered was: " << cValue << endl; // Notice that when we ask to output the cValue we get the ASCII character.
    
    cout <<"The Char  ASCII table value was: " << int(cValue) << endl; // We can also request that it is displayed as an int if we want to double check that it's really calling our value.
    
    
    cout << "Byte Size of char: " << sizeof(char) << endl; // Look at how small the storage space is  its only 1 byte meaning it only holds 8 bits!
    
    
    // There is also a variation of char that stores larger int values. It's rarely used, but this is how you could go about accessing it.
    
    wchar_t wValue = 'i'; // notice how i can call the inverse of the operations by giving it the value of the character of i. To do this I have to place the character in ' '.
    
    cout << "The Int Value from the ASCII chart: " << wValue << endl; // We can see that it will return the ASCII numeric value
    
    cout << "The Char Value is: " << (char)wValue << endl; // We can also have it return the character value as well.
    
    cout << "Byte Size of wchar_t: " << sizeof(wchar_t) << endl; // look at that! wchar_t support 4 bytes instead of the 1 supported by char 
    
    
    
    
    
    return 0;
}
