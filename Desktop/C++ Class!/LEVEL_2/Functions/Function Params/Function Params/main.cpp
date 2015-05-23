//
//  main.cpp
//  Function Params
//
//  Created by Chris Platika on 5/19/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

/* So now that we learned how to hand a variable that was created in a function down to the main function, we're looking much better but let's say we want to clean up our main even more. Let's say we want to store our switch in a seperate function. How are we going to take a variable that placed in main and put it into an entirely seperate function? Well that's where parameters come in handy. Let's keep building of the example we've been using! */



void showMenu(){ // First let bring in our show menu function.
    
    cout << "THE FANCY MENU" << endl;
    cout << "============== \n" << endl;
    string menuOptions[] = { "New Record", "Delete Record", "View Record", "Quit" };
    for (int i = 0; i < sizeof(menuOptions) / sizeof(string); i++){
        cout <<"# " << i+1 << "\t " << menuOptions[i] << endl;
    }
}

int menuSelection(){ // Next were going to bring in our menu selection option remember this one has to be set to output an int in order for us to effectively pass this back to our main.
    
    cout << "\nEnter Your Selection >" << flush;
    
    int userInput;
    cin >> userInput;
    
    return userInput;

}

/* Now here is the new step, first were going to build out a function that is going to hold our menu response. Were going to make it a void function since it's not going to return any value back into the main. Now inside of the arguments that its going to accepts were going to state that it can take an int variable called userSelection. That right! The same variable that were pushing the menuSelection return value to! */

void menuResponse(int userSelection){ // Notice how we state the input type and name
    

    switch(userSelection){ // this is the same switch from the last example
            
        case 1:
            cout << "Adding New Record...." << endl;
            
            break;
        case 2:
            cout << "Deleting Record...." << endl;
            
            break;
            
        case 3:
            cout << "Viewing Record...." << endl;
            
            break;
            
        case 4:
            cout << "Quitting..." << endl;
            
            break;
            
        default:
            cout << "Invalid Selection! \n" << endl;
            cout << "Shutting Down" << endl;
            
    }
}

/* Now lets look at how we declare this in our main */

int main(){
    
    showMenu(); // First were going to run our show menu function.
    int userSelection = menuSelection(); // Next were going to create a variable called userSelection using our menuSelection function. So far so good!
    menuResponse(userSelection); // Then finally were going to take our userSelection and send it through our menu response.  Notice how much cleaner our main is to read now! Pretty awesome right!
    
    
    
    
    
    
    return 0;
    
    
}
