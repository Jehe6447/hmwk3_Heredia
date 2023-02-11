// CSCI 1300 Spring 2023
//Author: Jeremiah Heredia
//Recitation: 102- Tuan Tran
// Homework 3 Problem 2
 
 
 #include <iostream>
 using namespace std;
 
 int main(){
    double budget; // define variables
    char transType;
    
    cout << "What is your budget?" << endl; // prompt user to input budget
    cin >> budget;
    
    // check for validity of input for the budget, a non negative value in this case
    if (budget < 0){
        cout << "Please enter a valid input." << endl;
        return 0;
    }
    // prompt user to input perferred mode of transportation 
    cout << "What mode of transportation would you like to take (B, T, or A)?" << endl;
    cin >> transType;
    
    // check for validity of the peferred mode of transportation, a Capital B,T or A in this case
    if (transType != 'B' && transType != 'T' && transType != 'A'){
        cout << "Please enter a valid input." << endl;
        return 0;
    }
    
    // check if the user input is greater than or equal to the necessary price, 175.25 dollars in this case
    if (transType == 'B'){
        if (budget >= 175.25){
            cout << "Yes, this vacation is within your budget!" << endl;
        }
        else{
            cout << "Sorry, this vacation is outside your budget." << endl;
        }
    }
    // check if the user input is greater than or equal to the necessary price, 240.66 dollars in this case
    else if (transType == 'T'){
        if (budget >= 240.66){
            cout << "Yes, this vacation is within your budget!" << endl;
        }
        else{
            cout << "Sorry, this vacation is outside your budget." << endl;
        }
    }
    
    // check if the user input is greater than or equal to the necessary price, 350.93 dollars in this case
    if (transType == 'A'){
        if (budget >= 350.93){
            cout << "Yes, this vacation is within your budget!" << endl;
        }
        else{
            cout << "Sorry, this vacation is outside your budget." << endl;
        }
    }
    
    return 0;
 }
