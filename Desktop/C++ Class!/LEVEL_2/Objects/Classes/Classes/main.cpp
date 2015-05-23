//
//  main.cpp
//  Classes
//
//  Created by Chris Platika on 5/20/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

/* Alright so now were able to take our next big step forward. It's time to learn about what makes C++ an object oriented language.  So first were going to set up another header file just like in our last example. This is going to hold the function calls for the class were going to create */

#include <iostream>
#include "Cars.h" // So Here we are setting a custom header file again. Ontop of that lets create a second C++ file that were going to link this header.


int main() {
   
    Cars honda; // Now were going to call a version of our class. The best way to think of a class is as the specific descriptions that can apply for multiple objects so in this example. Our class is Cars and an instance of Cars is a honda. So honda will be able to do all the features of a Car.
    
    honda.carHorn(); // So Now We can those functions we made in the Cars file.
    honda.revEngine(); // Pretty clean right!
    
    
    
    
    
    return 0;
}
