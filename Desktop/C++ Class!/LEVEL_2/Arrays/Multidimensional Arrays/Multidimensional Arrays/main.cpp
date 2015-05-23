//
//  main.cpp
//  Multidimensional Arrays
//
//  Created by Chris Platika on 5/19/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

/* So as we saw with regular arrays we can use them to hold a series of elements. Well multi demensional arrays can do that as well. The major difference being multi-demensional arrays can hold multiple sets of elements. If your familiar with excel you can think of this as almost being like a table with rows and columns. Were going to start simple and work with a 2D Array */


int main() { // The set up for a multi demensional array is very similar to that of a standard one. You probably notice that there is two boxes think of the first one stating how many rows are in the array and the second as the columns.
    
    string foods [2][3] = { // when we go to assign values were going to create a bracket just like before but now were going to have two brackets inside of it, one for each row.
        {"Bacon" , "Eggs", "Pancakes"}, //We can set the elements just like before and when we get to the next row we have to end that bracket with a comma.
        { "Hamburgers", "Subs", "Pizza"}
        
    }; // now that we have set the values lets try getting them to return in the console. In order to do this were going to have to use what is known as a nested for loop
    
    cout << "THE MENU" << endl;
    cout << "=========\n" << endl;
    
    for(int i=0; i < 2; i++){ // We first set up our initial for loop that will step through the rows in our array
        for(int j=0; j < 3; j++){ // Next we set up another for loop that will step through each element in the column. Now here we have to use a different variable then i since were using i on the upper layer.
            
            cout << foods[i][j] << " " << flush; //now we can use our two incrementing variables to print each element in the table
            
            
        }
        cout << endl;
        
    }
    
    
    
    return 0;
}
