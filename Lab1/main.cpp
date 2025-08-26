#include<iostream>
using namespace std;

class BankAccount{
      
      //making a data member balance
      private:
              int balance;
              
      public:
             
             //Default Constructor:
              BankAccount(){
                            balance=0;
             }         
             
             //Parametrized Constructor:
             BankAccount(int balance){
                           this->balance=balance;
             }
             
             //Copy Constructor(no dma so need for passing by reference):
             BankAccount(BankAccount &b){
                           balance=b.balance;                                                          
             }
             
             //method for showing balance    
             int showBalance(){
                        return balance;            
                 }
               
             //method to deduct from balance    
             void withdraw(int x){
                        if(balance>=x){
                               balance-=x;               
                        }
                  }
      
      };



int main(){
    
    //part1: Showing usage of default constructor and showing balance:
             BankAccount account1;
             //displaying balance of account1:
             cout<<account1.showBalance()<<"$\n";
             
    //part2 : Parameterized Constructor Usage:
             BankAccount account2(1000);
             //displaying balance of account2:
             cout<<account2.showBalance()<<"$\n";
            
    //part3: Copy Constructor Usage:
             BankAccount account3(account2);
             
             //deducting 200 from account3:
             account3.withdraw(200);
             
             //displaying balance of account3:
             cout<<account3.showBalance()<<"$\n";
             
             //displaying balance of account2 again:
             cout<<account2.showBalance()<<"$\n";
 
 return 0;   
}
