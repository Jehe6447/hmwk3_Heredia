// CSCI 1300 Spring 2023
//Author: Jeremiah Heredia
//Recitation: 102- Tuan Tran
// Homework 3 Problem 6

#include <iostream>
using namespace std;

int main(){
    int category;
    int instrument;
    
    // prompt user to select a instrument category
    cout << "Select a category: (1)Brass (2)Woodwind (3)Percussion\n";
    cin >> category;
    
    //3 seperate cases each for category
    switch(category){

        //if Brass is selected the user is prompt to choose between brass instruments
        case 1:
            cout << "Select an instrument: (1)Trumpet (2)Trombone\n";
            cin >> instrument;
            //depending on the instrument chosen the price will differ
            switch(instrument){
                case 1:
                    cout << "Your instrument will be $350.\n";
                    break;
                
                case 2:
                    cout << "Your instrument will be $400.\n";
                    break;
                    
                default:    //in case of weird input
                    cout << "Please enter a valid input.\n";
                    break;
            }
            break;

        // if woodwind is selected user is prompt to choose between woodwind instruments   
        case 2:
            cout << "Select an instrument: (1)Flute (2)Saxophone\n";
            cin >> instrument;
            //depending on the instrument chosen the price will differ
            switch(instrument){
                case 1:
                    cout << "Your instrument will be $325.\n";
                    break;
                
                case 2:
                    cout << "Your instrument will be $425.\n";
                    break;
                    
                default:    //in case of weird input
                    cout << "Please enter a valid input.\n";
                    break;
            }
            break;
        // if percussion is selected user is prompt to select between percussion instruments    
        case 3:
            cout << "Select an instrument: (1)Snare Drum (2)Cymbals\n";
            cin >> instrument;
            
            //depending on the instrument the price will differ
            switch(instrument){
                case 1:
                    cout << "Your instrument will be $275.\n";
                    break;
                
                case 2:
                    cout << "Your instrument will be $200.\n";
                    break;
                    
                default:    //in case of weird input
                    cout << "Please enter a valid input.\n";
                    break;
            }
            break;
        
        default:    //in case of weird input
            cout << "Please enter a valid input.\n";
            break;
    }
    
    return 0;
}
