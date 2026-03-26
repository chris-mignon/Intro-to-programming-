//  bank account.cpp


#include <iostream>
using namespace std;


//function to validate the account number
bool isValidAccount(int arr[], int size, int searchValue, int &accIndex ){
    bool found = false;
    for(int i = 0; i < size; i++){
        if(arr[i] == searchValue){
            found = true;
             accIndex = i;
            break;
        }
    }
    
    return found;
}

//function to deposit money into the account
void deposit( int accIndex, double  (&accountBalances)[]){
    double depositAmt;
    cout<<"Enter the Amount you want to deposit"<<endl;
    cin>>depositAmt;
    accountBalances[accIndex] += depositAmt;
}

int main() {
    const int SIZE = 18;
    int accNbr, accIndex;
    char action;
    int accounts[18]= {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552,  7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    string accountNames[SIZE] = {"Adda", "Sam", "June", "Lisa", "Jake", "Javon", "Jamie", "Elena", "Marcus", "Riley", "Sasha", "Kiran", "Oscar", "Chloe", "Victor", "Nora", "Zane", "Maya"};
    double accountBalances[SIZE] = {};
    
    
     //###############################################
    
     cout<<"enter the account number"<<endl;
     cin>>accNbr;
     while(isValidAccount(accounts,SIZE,accNbr, accIndex )){
         cout<<"account valid: proceed\n"<<endl;
         cout<<accountNames[accIndex]<<"\nBalance: $ "<<accountBalances[accIndex]<<endl;
         
         cout<<"A----Deposit\nB----Withdraw"<<endl;
         cin>>action;
         if(action =='A'){
             deposit(accIndex, accountBalances);
             
         }
         else if(action =='B'){
             
         }
         
     }
        if(!isValidAccount(accounts,SIZE,accNbr, accIndex )){
         cout<<"account invalid:check number"<<endl;
     }
     
    return 0;
}