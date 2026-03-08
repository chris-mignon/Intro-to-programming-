#include <iostream>
using namespace std;

int findSum(int val1, int val2){
    return val1 + val2;
}

int findProd( int val1, int val2){
    return val1 * val2;
}

void addAll( int val1, int val2){
    int total = val1 + val2;
    cout<<"The final value after the addition and multiplication "<<total<<endl;
}
int main() {
    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
     cout<<"Enter the second number"<<endl;
    cin>>num2;
    
    int sum = findSum(num1,num2);
    int prod = findProd(num1,num2);
    cout<<"The sum of the 2 numbers is "<<sum<<endl;
    cout<<"The product of the 2 numbers is "<<prod<<endl;
    cout<<"The sum of the \'sum\' and product is "<<endl;
    addAll(sum,prod);
    return 0;
}