
//  numberAnalysis.cpp
//  This program prompts the user to enter a set of numbers, then calculates and displays the highest, lowest, total, and average of those numbers. It also prints the array of numbers entered by the user.


#include <iostream>
using namespace std;

// Function to find the maximum value in an array
int findMax(int arr[],int size)
{
    int max= arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i]> max)
        {
            max = arr[i];
        }
    }
    return max;
}

// Function to get numbers from the user and store them in an array
void getNumbers(int (&arr)[], int size)
{
    // Loop to get numbers from the user with input validation
    for(int i = 0; i < size; i++){
        cout << "Enter number "<<i + 1<< " of "<< size<<endl;
        // input validation to ensure user enters a valid number
        while(!(cin>>arr[i]))
        {// Keep asking until the user enters a valid number
            cout << "Invalid input. Try again: \n";
            cin.clear(); // Reset input errors
            cin.ignore(10000, '\n'); // Remove bad input
        }
    }
    
    
}

// Function to print the contents of an array
void printArray(int arr[],int size)
{
    for(int i = 0; i < size; i++){
        cout<<arr[i]<< " ";
    }
    
}

// Function to find the minimum value in an array
int findMin(int arr[],int size)
{
     int min= arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
// Function to calculate the total of the values in an array
int findTotal(int arr[],int size)
{
    int sum=0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}


// Main function
int main() {
    // Define constants and variables
    const int SIZE = 20;
    int numbers[SIZE];
    int total, lowest, highest;
    double average;
    
    // Get numbers from the user and perform calculations
    getNumbers(numbers,SIZE);
    // Calculate highest
    highest = findMax(numbers,SIZE);
    // Calculate lowest
    lowest = findMin(numbers,SIZE);
    // Calculate total 
    total = findTotal(numbers,SIZE);
    // Calculate average
    // Cast total to double to ensure floating-point division for average calculation
    // This prevents integer division, which would truncate the decimal part and give an incorrect average if total is not perfectly divisible by SIZE.
    // By casting total to double, we ensure that the division operation produces a floating-point result, allowing for an accurate average calculation even when total is not a multiple of SIZE.
    average = static_cast<double>(total) / SIZE;
    
    // Display results
    cout<<"\n highest "<<highest<<endl;
    
    cout<<"\n lowest "<<lowest<<endl;
    
    cout<<"\n total "<<total<<endl;
    
    cout<<"\n average "<<average<<endl;
    
    // Print the array of numbers entered by the user
    printArray(numbers,SIZE);
    
    
    return 0;
}