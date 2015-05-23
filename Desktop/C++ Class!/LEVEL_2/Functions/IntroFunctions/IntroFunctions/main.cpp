//
//  main.cpp
//  IntroFunctions
//
//  Created by Chris Platika on 5/19/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

/* Well done! You've conquered Arrays and you're ready to unlock the next secret ability. Now you're going to be mad that I didn't show you this sooner but now that you spent a bit of time doing stuff the hard way lets learn a little short cut called functions. Now in the root language of C the end all be all was function which allowed you to store some executable code. In C++ we can go one step further and have classes but we will get to that later... Lets make our first function */


void showMenu(){ /* So let's grab the menu we made in our switch example. To create a function we first give it a name the convention we work with is 
                  returntype functionName (arguments) {code} 
    So this one we will name show Menu, and lets put our array in there we created to draw out the menu. */
    
    cout << "THE FANCY MENU" << endl;
    cout << "============== \n" << endl;
    string menuOptions[] = { "New Record", "Delete Record", "View Record", "Quit" };
    for (int i = 0; i < sizeof(menuOptions) / sizeof(string); i++){
         cout <<"# " << i+1 << "\t " << menuOptions[i] << endl;
    }
    
}

void menuSelection(){// We can also place our selection switch and user input in a function as well. Now down in the main code we just need to call both functions
        
        cout << "\nEnter Your Selection >" << flush;
        
        int userInput;
        
        cin >> userInput;
        
        switch(userInput){
                
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
    


int main() {
    
    showMenu(); // Now to call the menu display
    menuSelection(); // and the selection tool and look how much cleaner our main looks!
    
    return 0; // Give it a Try!
}
