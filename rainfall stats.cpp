// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void enterRainFall(float (&arr)[],string month[], int size){
    for(int i = 0; i < size; i++){
       cout<<"enter the amount of rainfall in: "<<month[i]<<endl;
       // Validate input to ensure it's a non-negative number
       while(!(cin>>arr[i]) || arr[i] < 0){
           cout<<"Invalid input. Please enter a non-negative number for rainfall in "<<month[i]<<endl;
           cin.clear(); // Clear the error flag
           cin.ignore(10000, '\n'); // Discard invalid input
       }
   }
}
float findHighest(float arr[], int size)
{
    float max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
//method to find the lowest in an array
float findLowest( float arr[], int size){
   float min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min)
            min = arr[i];
 
    return min;
}


int main() {
    const int SIZE = 12;
    float rainFall[SIZE];
    string month[SIZE] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};    
    float average, highest, lowest, total = 0;
   cout<<"Rainfall Statistics"<<endl;


   // get rainfall for each month
   enterRainFall(rainFall, month, SIZE);
  
   //find total
   for(int i = 0; i < SIZE; i++){
       total += rainFall[i];
   }
   // find average 
   average = total / SIZE;
   
   cout<<"total rain fall is "<<total<<endl;
   cout<<"Average rain fall is "<<average<<endl;
   lowest = findLowest( rainFall, SIZE);
   highest = findHighest( rainFall, SIZE);
   cout<<"The  highest rainfall "<<highest <<endl;
  cout<<"The  Lowest rainfall "<<lowest<<endl;

    return 0;
}