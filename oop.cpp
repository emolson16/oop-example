
using namespace std;
#include <iostream>

// this is a class!
class BankAccount {
  private: 
    double bill; //represents credit card bill
    double balance; // represents your balance

  public:

    // initializes bank account to 0
    BankAccount() {
      bill = 0;
      balance = 0;
    }

    // TODO: initializes bill to 0 and balance to initialAmount
    BankAccount(int initialAmount) {}
    
    //TODO: deposit the given amount into your balance
    void deposit(double amount) {}

    void charge(double amount) {
      bill += amount;
    }

    //TODO if you have enough money, withdraw the given amount and return ture
    // if you don't have enough money, just return false
    bool withdraw(double amount) {}

    //TODOL Pay your credit card bill (you can go into debt here)
    // try to do this one using scope resolution!
    void payBill();

    // Challenge problem- don't worry if you can't get it yet
    // TODO pay your freind the given amount to their account 
    // You cannot go into debt here (return false if you don't have enough money)
    bool payFriend(BankAccount& friendAccount, double amount) {}

    // prints current balance 
    void printBalance(){
      cout << "Current balance is: $" << balance << endl;
    }

    ~BankAccount() {
      cout << "dtor!!" << endl;
    }

};


int main() {

  BankAccount myAccount;
  myAccount.deposit(100);

  BankAccount friendAccount;

  // myAccount.payFriend(friendAccount, 75);


  myAccount.payBill(); 
  // friendAccount.printBalance();

  return 0;
}


