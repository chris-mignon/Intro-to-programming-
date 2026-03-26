#include <iostream>
using namespace std;

bool isValidAccount(int arr[], int size, int searchValue){
    bool found = false;
    for(int i = 0; i < size; i++){
        if(arr[i] == searchValue){
            found = true;
        }
    }
    return found;
}
int main() {
    const int SIZE = 18;
    int accNbr;
    int accounts[18]= {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552,  7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
     
     //###############################################
     cout<<"enter the account number"<<endl;
     cin>>accNbr;
     if(isValidAccount(accounts,SIZE,accNbr )){
         cout<<"account valid: proceed"<<endl;
     }
     else{
         cout<<"account invalid:check number"<<endl;
     }
     
    return 0;
}