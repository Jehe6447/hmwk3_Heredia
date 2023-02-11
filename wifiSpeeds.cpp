// Homework 3 Problem 4

#include <iostream>
using namespace std;
int main ()
{
    // define variables
    double wifi1;
    double wifi2;
    double wifi3;
    
    // prompt user to input 3 seperate values
    cout << "Enter wifi speeds over the last 3 classes:" << endl;
    cin >> wifi1;
    cin >> wifi2;
    cin >> wifi3;
    
    // check validity of the user inputs 
    if (wifi1<0 || wifi2 <0 || wifi3 <0){
        cout << "Please enter a valid input." << endl;
        return 0;
        
    }
    // check that the values increase and output that the Wifi is getting faster
    if (wifi1< wifi2 && wifi2 < wifi3){
        cout << "The wifi is getting faster!" <<endl;
    }
    // check that the values decrease and output that the Wifi is getting slower
    else if(wifi1>wifi2 && wifi2>wifi3){
        cout << "The wifi is getting slower!" << endl;
    }
    
    // if the values aren't what I specified about the code will run that the change of wifi speed is unpredictable
    else{
        cout << "The wifi speed is changing unpredictably." << endl;
    }
    return 0;
}
