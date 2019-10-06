#include <iostream>
#include <fstream> //for writing to the output file
#include "bank.h"

using namespace std;

//function prototypes
void printArray(int array[]);
//note i got rid of the initialize array function because we can't return more than one thing from an array

int main()
{
  account accounts[int id]; //keeps track of the account array. Can't have more than 10 entries according to the rules our program needs to follow.
  string action,fullName; //user choice of what to do
  bool run; //allows while loop to run until 'exit' command
  double balance,withdrawal,deposit;
  outfile accountFile; //our output file. If were gonna be reading from it again we may also wish to create an input file variable as well.

//I know these are supposed to be somewhere but I dont know where so im setting them aside for right now
/*cout << "Please Enter The name of account holder: ";
getline(cin, fullName);*/
//  account first(fullName);

//WHILE LOOP INFO----
  //in while loop, have the available options which are 1.create account 2.check balance 3.deposit 4.withdraw
  //allows us to continously cycle through until exit command
  //sets up conditions for while loop such that the inputted information gets written to a .txt file upon 'exit' command
  
run=true;
while (run) //i actually dont know if this is valid syntax in c++, ive only used it in python. So we may have to change it, just as a warning.
{
  cout<<"Enter 1 to create an account, 2 to Check an account balance, 3 to withdraw from the account, 4 to deposit money into the account. Type 'exit' when done."<<endl;
  cin>>action; //takes in the command of what the user is going to do

//--- TO DO ---
//  Create account class
//  Give the account class methods that allow us to create an account, get account balance, withdraw, deposit, etc;
//  enter those methods into their respective switch statements in main, s.t. the respective cases in the switch statement perform their intended tasks

  switch (action)
  {
    case "1": //create account option
      cout<<"Create an account? "<<endl;
      if (id <= 10) //checks for limit on amount of accounts already created, the max should be 10.
      {
          //code block to create an account
      }
      else
      {
        cout<<"Limit on amount of accounts reached."<<endl; //yells at the user for creating too many accounts.
      }
      break;

    case "2":  //check account balance option
      cout << "Your Balance is " <<first.showBalance()<< endl;
      break;

    case "3": //withdraw from account option
      cout << "How much would you like to withdraw?: "<<endl;
      cin>>withdrawal;
      //appropriate methods for withdrawing from balance
      break;

    case "4": //deposit into account option
      cout << "How much would you like to deposit?: "<<endl;
      cin>>deposit;
      //appropriate methods for depositing into balance
      //first.deposit(400.0); <<instead of 400 we would want to have a variable i think
      break;

    case "exit":case "Exit": //exit command
      run=false;
      break;

    case default: //cant remember if the syntax is "case default" or just "default", ill have to google it
      cout<<"Invalid command."<<endl;
      break;
  }

  accountFile.open("account.txt","w"); //again we might wish to check the syntax on this, but it should open the output file so we can write to it

  //accountFile>>accountsArray; //writes the accountsArray data to the output file
}

  return 0;
}

//function definitions
void printArray(int array[]) // cout each value in the array
{
    for (int i=0;i<=9;i++)
    {
      cout<<array[i]<<" "<<endl;
    }
}
