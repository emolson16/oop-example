
using namespace std;
#include <iostream>

// this is a class!
class BankAccount {
  private: 
    double bill = 100; //represents credit card bill
    double balance = 0; // represents your balance


  public:

    //TODO: deposit the given amount into your balance
    void deposit(double amount) {

    }

    //TODO if you have enough money, withdraw the given amount and return ture
    // if you don't have enough money, just return false
    bool withdraw(double amount) {
      
    }

    //Pay your credit card bill (you can go into debt here)
    void payBill();

    // Challenge problem- don't worry if you can't get it yet
    // TODO pay your freind the given amount to their account 
    // You cannot go into debt here (return false if you don't have enough money)
    bool payFriend(BankAccount& friendAccount, double amount) {
  
    }

    // prints current balance 
    void printBalance(){
      cout << "Current balance is: $" << balance << endl;
    }
};

//TODO pay your credit card bill (you can go into debt here)
void BankAccount::payBill(){

}



int main() {

  BankAccount myAccount;

  return 0;
}
