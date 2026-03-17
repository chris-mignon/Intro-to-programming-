// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// method to display array elements 
void printArray(int arr[], int size){
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<",";
    }
}
// method to obtain array elements 
void getArrayValues(int (&arr)[], int size){
    for(int i =0; i<size;i++){
        cout<<"enter the array val at "<< i<< " index"<<endl;
        cin>>arr[i];
    }
}

int main() {
    const int SIZE = 5;
    

    int array[SIZE] = {5, 7, 8, 2,10};
    int ar[SIZE];
    printArray(array,SIZE);
   
   //int sum = array[0] + array[2];
  // cout<<sum<<endl;
 // getArrayValues(ar,SIZE);
 // printArray(ar,SIZE);
    return 0;
}