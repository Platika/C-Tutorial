//
//  main.cpp
//  Header & Prototypes
//
//  Created by Chris Platika on 5/20/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//


/* So we've learned to slim down our main process with functions, but I'm sure you're saying how would this work for a really complicated program? Well the answer is .... it wouldn't! It's actually quite common to place functions inside of seperate files and then call them into the main program to run them. So how do we do that? I'll number my comments so you can follow along.  */


#include <iostream> // (3) This input output stream is actually an example of function pulled into the main. Now were gonna create our own header file and add it in!

#include "firstheader.h" /* (4) Boom! One of the only actual uses for a hashtag :P Now that we have added the file to the main the computer will literally copy and paste whatever is in this header file and paste it in before the program runs.  Since were not calling a standard system file we have to surround it with double quotes. iostream is a standard file so we can use <> since the pre-processor knows the standard location. Now let's go look at the header file! */

using namespace std;


int main() {
    
    
    aroundtheWorld(); // (2) It won't work :( This is because the compiler can only run from top to bottom, but down worry were gonna work around this with a header.
    
    
    return 0; // (6) Now go ahead and give it a run! 
}

void aroundtheWorld(){ // (1) For this example lets put a function down here. and try to call it up above.
    
    cout << " A Daft Punk Song!" << endl;
    
}
