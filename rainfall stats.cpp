// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

float findHighest(float arr[], int size)
{
    float max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
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
    float average, highest, lowest, total = 0;
   cout<<"Rainfall Statistics"<<endl;
   
   for(int i = 0; i < SIZE; i++){
       cout<<"enter the amount of rain fall in month: "<<i+ 1<<endl;
       cin>>rainFall[i];
   }
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