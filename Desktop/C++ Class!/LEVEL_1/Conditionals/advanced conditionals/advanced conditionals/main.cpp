//
//  main.cpp
//  advanced conditionals
//
//  Created by Chris Platika on 5/18/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

/* So Far so good! Let's quickly review some of the conditions that we've used thus far
 * == for evaulating if two things are equal
 * != for evaulating if two things are not equal
 * < for evaulating if an object is less than another
 * > for evaulating if an object is greater than another
 * We're going to add a couple more to the list and they're probably going to make sense if you done some functional notation!
 * <= is for evaulating if an object is less then or equal to another
 * >= is for evaulating if an object is greater then or eqaul to another
 * && represent the symbol for logical and allowing us to link two conditions together
 * || represent or allowing using to use two conditions in a slightly different way from the &&
 */


int main() {
    
    int lightSide = 10;
    int darkSide = 5;
    
    if (lightSide >= 10){ // We can call these conditions the same way as before and see how it works
        
        cout << "Condition 1: The Light Side is strong" << endl; // We can set our console response to output based on the condition
        
    } else {
        
        cout << "Condition 1: The Light side grows weak!" << endl;
        
    } //this is all pretty similar to what we did earlier, we can however build conditions on top of one another like so...
    
    if(lightSide >= 10 && darkSide <= 10){ // using the && symbol we can construct a condition that will evaluate as true only if both conditions are met
        cout << "Condition 2: The Force leans towards good!" << endl;
    }
    else{
        
        cout << "Condition 2: The Force leans towards evil!" << endl; //else it will output this
    
    }
    
    /* We Can also use the || to create another condition type that will evaluate true based on either of the stated conditions, this can be super useful when working with logic problems. Let's build out one using our existing example.
     
     */
    
    if (lightSide > 15 || darkSide <= 5){ // with this type of statement only one of the conditions needs to evaluate as true  for it to display a true statement
        
        cout << "Condition 3: It's Luke Skywalker!" << endl;
        
    }
    else {
        
        cout << "Condition 3: It's Darth Vader!" << endl;
    } //now as you can see these conditionals are getting a bit complicated to keep track of we can however combine even more then one condition  into a single if statement.
    
    if( (darkSide <= 5 && darkSide != 0) || darkSide >= 1 ){ // Now if we remember that the computer is going to evaluate this from left to right we can see how it going to output this.
        
        cout << "Condition 4: There is a Sith in Hiding!" << endl;
        
    } else {
        cout << "Condition 4: The Sith have been wiped out!" << endl;
    }// However this is still pretty complicated. We can simplify this further by using the bool type variable we looked at earlier so lets declare two bool variable to hold both types of conditions.
    
    bool sithCondition1 = (darkSide <= 5 && darkSide != 0); // So we've taken both conditional statements from our 4th condition type example and we've assigned it to two seperate boolean variables.
    bool sithCondition2 = darkSide >= 1;
    
    // Lets double check and make sure they both evaluate as true. Remember bool will display a 1 if its true and 0 if its false.
    //cout << sithCondition1 << endl; // Try uncommenting these lines of code to double check the evaluation
    //cout << sithCondition2 << endl;
    
    // We can take the bool we created and remake our 4th condition in a cleaner looking format
    
    if( sithCondition1 || sithCondition2 ){ // Now we have rewritten this so it will evaluate as true based on either sithCondition. Trying to simplify conditions like so will save you a whole bunch of headaches later!
        cout << "Condition 5: The Force Awakens!" << endl;
        
    } else {
        cout << "Condition 5: The Force Needs Coffee!" << endl;
    
    }
    
    return 0;
}
