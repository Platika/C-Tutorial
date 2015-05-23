//
//  main.cpp
//  Return Values
//
//  Created by Chris Platika on 5/19/15.
//  Copyright (c) 2015 Chris Platika. All rights reserved.
//

#include <iostream>
using namespace std;

/* So now That were simplifing our main section of code you're going to notice that we may run into a problem. 
   what if we want to use a variable  that we declared in a function down in our main code section!? Well don't worry that's
 where return values come in handy! */

void showMenu(){ // Now with a typical function such as our fancy menu we don't want it to return a value to main so we set it's return type as void.

    cout << "THE FANCY MENU" << endl;
    cout << "============== \n" << endl;
    string menuOptions[] = { "New Record", "Delete Record", "View Record", "Quit" };
    for (int i = 0; i < sizeof(menuOptions) / sizeof(string); i++){
        cout <<"# " << i+1 << "\t " << menuOptions[i] << endl;
    }


}
// But for this example let us create another function that will hold our menu selection code

int menuSelection(){ //So were going to create a function that has a return type of integer
    
    cout << "\nEnter Your Selection >" << flush;
    
    int userInput; //where going to set up the variable to hold the user selection
    
    cin >> userInput;
    
    return userInput; // and now were going to make sure that the return integer is value entered by the user
}



int main() {
    
    showMenu();
    int userSelection = menuSelection(); // Now down in our main code segment we can call the selection function to fill our main variable.
    
    switch(userSelection){ // We can now run the rest of the switch using the return value we got from our menu selection. 
            
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
    cout << endl;
    
    
    return 0;
}
