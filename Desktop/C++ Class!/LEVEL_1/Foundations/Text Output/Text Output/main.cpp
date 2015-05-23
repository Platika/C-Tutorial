//
//  main.cpp
//  Text Output
//
//  Created by Chris Platika on 5/18/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>//this tells the systems were going to use an input output stream
using namespace std; //this allows us to use standard G++ calls without calling there convention as we saw in the Hello       World Example

int main() { //this is where we set up the actual run program the computer will execute everything in the brackets
    
    cout << "Once Upon A Time" << endl; // Here we tell the computer were going to do a c-out put with an insertion (<<)
    cout << "In a Galaxy Far Far Away...." << endl; //endl tells the system to place an end line
    
    cout << "**STAR WARS" << flush; // flush is another call type look at the terminal to see the difference between this and endl
    cout << ": EPISODE IV **" << endl; //also notice how each of these "statements" end with a semicolon
    
    cout << "The galactic empire" << " " << "something something :)" << endl; //notice how we can link multiple lines of text together using the insertion command, we'll do some cool stuff with this later! 
    
    
    return 0;

}
