// CSCI 1300 Spring 2023
//Author: Jeremiah Heredia
//Recitation: 102- Tuan Tran
// Homework 3 Problem 3

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // define variables
    char pizzaSize;
    int pizzaToppings;
    double totalCost = 0.00;
    
    // prompt user to choose a pizza size
    cout << "What size pizza would you like to order?" <<endl;
    cin >> pizzaSize;
    
    // check the validity of the input, an uppercase S, M or L in this case
    if (pizzaSize != 'S' && pizzaSize != 'M' && pizzaSize != 'L'){
        cout << "Please enter a valid input." << endl;
        return 0;
    }

    // prompt user to choose an amount of toppings 
    cout << "How many toppings do you want? \n";
    cin >> pizzaToppings;
    

    // check for the validity of the amount of toppings, a non negative value in this case
    if(pizzaToppings < 0){
        cout << "Please enter a valid input." << endl;
        return 0;
    }

    // check that pizza size is S, M, or L
    if (pizzaSize == 'S'){
        totalCost += 4.99; // total price of pizza size S with no toppings
        totalCost += pizzaToppings*0.75; // total price after taking account of the amount of toppings and cost of toppings 
    }
    if (pizzaSize == 'M'){
        totalCost += 5.99; // total price of a pizza size M
        totalCost += pizzaToppings*1.50; // total price after taking account of the amount of toppings and cost of toppings
    }
    if (pizzaSize == 'L'){
        totalCost += 6.99; // total price of a pizza size L
        totalCost += pizzaToppings*2.25; // total price after taking account of the amount of toppings and cost of toppings
    }

    // set precision will choose to produce selected number of decimal places and the fixed before it will clean up the output making it a whole number when needed
    cout << fixed << setprecision (2) << "Your total is $" << totalCost << endl; 
    
    return 0;
}
    

