#include <iostream>
using namespace std;

// function to calculate total from array
int addTotal(int array[], int size )
{
    int total = 0;
    for(int i =0; i<size;i++){
        total += array[i];
    }
    return total;
}
// function to get the values
void getValues(int (&arr)[], string days[], int size)
{
    for(int i = 0; i< size;i++){
        cout<<"Enter the amount you sold on "<<days[i]<<endl;
        cin>>arr[i];
    }
}
int main() {
   // constant to save size
   const int SIZE = 7;
   //declare array
   int salesArray[SIZE];
   //declare the variable to save the total
   int totalSales;
   string days[SIZE]={"monday", "tuesday", "wednesday", "thursday", "friday", "saturday","sunday"};
   
   // obtain sales for week
 getValues(salesArray,days,SIZE);
 //calculate the total
 totalSales = addTotal(salesArray, SIZE);
 
 //display the total sales
 cout<<"The total sales for the week is: "<<totalSales<<endl;
    return 0;
}