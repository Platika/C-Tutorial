//
//  main.cpp
//  Sizeof Multidimen
//
//  Created by Chris Platika on 5/19/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

/* So in the last example we saw how we could use sizeof to make a flexible for loop through a single dimensional array, not lets try something a bit more complicated. Let's try doing the same thing to  a multi-dimensional array. 
                                  DON'T WORRY YOU GOT THIS!
 */

int main() {
    
    // So let's start by setting up a 2-D Array!
    
    string blizzGames[][3]{
        { "Star Craft" , "Star Craft: Brood Wars", "Star Craft II"},
        { "Warcraft" , "Warcraft II: Tides of War", "Warcraft III"}
    };
    cout << "The Byte Size of Strings is: " << sizeof(string) << endl; // Now let's double check and take a look at how big in bytes string is...
     cout << "The Byte Size of row of our 2-D Array is: " << sizeof(blizzGames[0]) << endl;
    cout << "The Byte Size of our whole 2-D Array is: " << sizeof(blizzGames) << "\n" << endl; // Now let's see our total 2-D array...
    
    /* Interesting! Our console is telling us a string is 24 bytes and our 2D array has 144 Bytes! 144/24 = 6 the exact amount of elements we have.... can you see where I'm going with this :D 
     You guessed it now were going to step through our array with a for loop. No remember since were working with a 2-D Array were going to have to use a nested for loop
     */
    
    for (int i=0; i < sizeof(blizzGames)/ sizeof(blizzGames[0]); i++){ // So first we have to set up the for loop that allows us to step through the rows. in this case we do this by dividing the byte size of our total array by the byte size of half the array. So basically we divided 144/72 = 2.
        for (int j=0; j < sizeof(blizzGames[0])/sizeof(string); j++){ //Next we have to step through each of the elements on a row. We do this by dividing the byte size of a single row by the byte size of a single string value. (72 / 24 = 3) Pretty cool right!
            
            cout << blizzGames[i][j] << " | " << flush; // Now we can have the system spit out each element value and we can seperate using either a space or like I use a bar.
            
            
            
        }
        
        cout << endl; // and before the end loop lets add and end of line so we get a nice break between the two rows.
        
    }
    
    
    
    
    
    
    
    
    return 0;
}
