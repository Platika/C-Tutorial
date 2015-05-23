//
//  Cars.h
//  Classes
//
//  Created by Chris Platika on 5/20/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#ifndef Classes_Cars_h
#define Classes_Cars_h

/* So now our header looks a little bit different. First were going to declare the class of the code that we wrote into the additional C++ file. */

class Cars{ //So they way we call a class is similar to our other functions we call the set the property as class and then call it by it's name
public: // We then declare it as a public, this allows us to access these functions in other pieces of code. This is super useful once we get into creating libraries.
    
    void revEngine(); // Now we call the two functions from our car class!
    void carHorn();
    
    
    
}; // Let's go to main and see how we call this class into our main. 

#endif
