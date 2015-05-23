//
//  main.cpp
//  Intro Arrays
//
//  Created by Chris Platika on 5/19/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;


/* Were doing good! Now it's time to tackle a new subject! Lets do a little bit of work with Arrays. So as we saw in earlier examples we can create variable to store a single value, but what if we wanted to work with and store multiple values in a single variable? Well that's where Arrays come in! */



int main() {
    
    
    cout << "SIMPLE ARRAY EXAMPLE" << endl;
    cout << "==================== \n" <<endl;
   
    int birthday[3]; // Arrays are set up similar to the way we setup a variable. We first need to state what type of array were going to be working with in this example. I said were going to be using an integer array. I then give the array a name and state how many items (aka elements) are in the array. So in this case we will do 3.
    
    birthday[0]= 03; // I can then individually set each item that's in the Array.
    birthday[1]= 24;
    birthday[2]= 1990;
    
    
    cout << "My birthday is: " << flush;
    
    
    // We can double check and make sure that the value we inputed are inside of the Array
    
    cout << birthday[0] << "/" << flush;
    cout << birthday[1] << "/" << flush;
    cout << birthday[2] << "\n" << endl;
    
    //while this is pretty cool we can take it a step further by utilizing our knowledge of loops. So lets go ahead and set up a new array.
    
    cout << "LOOPING ARRAY EXAMPLE" << endl;
    cout << "==================== \n" <<endl;
    
    string favoriteMovies[5] = { "Pulp Fiction" , "Star Wars" , "Insidious" , "Riddick" , "Lord of the Rings" }; // We can state the values in the string in a single line by orginizing them within a bracket set, and seperating each element with a column
    
    for(int i=0; i < 5; i++){ // So now we build out our for loop in this case since our array have 5 elements Im setting the condition up till 5.
        
        cout << "Favorite Movie " << "#" << i << ": "<< favoriteMovies[i] << endl; //Here is where the magic happens we have it step through our array by i and output the value at each spot. Go ahead and give it a try!
        
        }
    
    
    // We can also do other things like writing values to an array so lets try replacing the values in the table using a loop!
    
    cout << "\n Replacing Array Values" << endl;
    cout << "========================= \n" <<endl;
    
    for(int i=0; i < 5; i++){ // Let's set up the same loop from the example above and this time lets replace all the movie titles with Space Balls
        
        favoriteMovies[i] = "SPACE BALLS "; // So Here we re-assign the value in the i position to Space Balls, and then we let it print like before
        cout << "Favorite Movie " << "#" << i << ": "<< favoriteMovies[i] << endl; // and there we go we ruined a perfectly good list
        
    }
    
    cout << "\n DEFAULT ARRAY VALUE" << endl;
    cout << "====================== \n" <<endl;
    
    //we can use another trick to set the default value of an array as well. This can be useful when we need to start a list with 0 values and all since if we ommit a value the CPU will just dump whatever is in it's memory.
    
    int defaultArray[10] = {}; // All we have to do to leverage this trick is set the array equal to a set of empty {}
    
    for(int i= 0; i < 10 ; i++){
        
        cout << "ELEMENT # " << i << " This elements default value is : " << defaultArray[i] << endl; //now look at the value as that is displayed in the console.
        
    }
    
    return 0;
}
