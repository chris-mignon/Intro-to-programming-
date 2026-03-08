#include <iostream>
using namespace std;

// Declare global constants
//*****************************************************
/// <summary>
///  A constant value of the float type to save the price of class A seats
/// </summary>
const float SEAT_A_PRICE = 15;
/// <summary>
///   A constant value of the float type to save the price of class  seats
/// </summary>
const float SEAT_B_PRICE = 12;
/// <summary>
///  A constant value of the float type to save the price of class  seats
/// </summary>
const float SEAT_C_PRICE = 9;

// Declare Global variables
//***************************************

/// <summary>
/// The amount of class A seats sold
/// </summary>
float Seat_A_Count;
/// <summary>
/// The amount of class B seats sold
/// </summary>
float Seat_B_Count;
/// <summary>
/// The amount of class C seats sold
/// </summary>
float Seat_C_Count;
/// <summary>
/// The income from class A Seats sold 
/// </summary>
float incomeASeats;
/// <summary>
/// The income from class B Seats sold 
/// </summary>
float incomeBSeats;
/// <summary>
/// The income from class C Seats sold 
/// </summary>
float incomeCSeats;

/// <summary>
/// Display a prompt the user.
/// Usage: prompt(string message);
/// </summary>
/// <param name="message"> "A string literal or variable that is shown as a message to the user" </param>
void prompt(string message)
{
    std::cout << message << std::endl;
}
/// <summary>
/// Display the output to the user.
/// Usage: display( float val);
/// </summary>
/// <param name="val"> A float literal, variable or expression</param>
void display(float val)
{
    std::cout << val << std::endl;
}
/// <summary>
/// Get input from the user.
/// Usage: get( float val); // use ampersand after type float.
/// </summary>
/// <param name="val"> A reference variable to the a global variable within the class.</param>
void get(float& val)
{
    std::cin >> val;
}
/// <summary>
/// Calculate the income, multiply the seatCount by the seatPrice and save the answer in the subTotal 
/// </summary>
/// <param name="seatCount">float value</param>
/// <param name="seatPrice">float value</param>
/// <param name="subTotal">float variable</param>
void calculate(float& seatCount, const float& seatPrice, float& subTotal)
{
    subTotal = seatCount * seatPrice;
}


/// <summary>
/// Main function 
/// point of entry into the program
/// </summary>
/// <returns></returns>
int main()
{
    // ask user for the number of class a seats
    prompt("Enter the amount of class A seats");
    //get the number of class A seats from the user
    get(Seat_A_Count);
    // ask user for the number of class a seats
    prompt("Enter the amount of class B seats");
    //get the number of class B seats from the user
    get(Seat_B_Count);
    // ask user for the number of class a seats
    prompt("Enter the amount of class C seats");
    //get the number of class C seats from the user
    get(Seat_C_Count);
    // calculate the amount of income from class A seat sales
    calculate(Seat_A_Count, SEAT_A_PRICE, incomeASeats);
    // calculate the amount of income from class A seat sales
    calculate(Seat_B_Count, SEAT_B_PRICE, incomeBSeats);
    // calculate the amount of income from class A seat sales
    calculate(Seat_C_Count, SEAT_C_PRICE, incomeCSeats);
    // display the total income to the user
    display(incomeASeats + incomeBSeats + incomeCSeats);




    return 0;
}