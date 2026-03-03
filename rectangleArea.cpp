#include <iostream>
using namespace std;
///start program///

//method to prompt and obtain input from the user
void getValues(double &l, double &w)
{
    cout<<"Enter the length of the Rectangle"<<endl;
    cin>>l;
    
    cout<<"Enter the width of the Rectangle"<<endl;
    cin>>w;
}

// method to calculate the area of the rectangle
double findArea(double length, double width)
{
    return length * width;
}
// method overloading to calculate area of rectangle with different data types
double findArea(int length, int width)
{
    return length * width;
}

double findArea(int length, double width)
{
    return length * width;
}

double findArea(double length, int width)
{
    return length * width;
}

// main method
int main() 
{
    // declare variables
  double length, width, area;
  string sentinel;
  
  do {
  // obtain values
  getValues(length, width);
  
  //calculate area
  
  area = findArea(length,width);
  
  //display the area
  cout<<area<<endl;
  // ask user if they want to calculate another rectangle
  cout<<"\n \n Do you want to calculate another rectangle?\n(y/n)"<<endl;
  // obtain user input for sentinel
  cin>>sentinel;
  
  }
while (sentinel =="y");// loop will continue as long as user enters "y"
    return 0;
}