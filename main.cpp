#include <iostream>
#include <fstream> //for writing to the output file
#include <string>
#include "account.h"


using namespace std;

//function prototypes
//void printArray(int arr[]);  //once classes are created, change the array type to 'account'
//note i got rid of the initialize array function because we can't return more than one thing from an array

int main()
{
  int id; //keeps track of the account array. Can't have more than 10 entries according to the rules our program needs to follow.
  char action;
  string fullName; //user choice of what to do
  bool run; //allows while loop to run until 'exit' command
  double balance,withdrawal,deposit;
  int x;
  ofstream accountFile; //our output file. If were gonna be reading from it again we may also wish to create an input file variable as well.

//I know these are supposed to be somewhere but I dont know where so im setting them aside for right now
/*cout << "Please Enter The name of account holder: ";
getline(cin, fullName);*/
//  account first(fullName);

//WHILE LOOP INFO----
  //in while loop, have the available options which are 1.create account 2.check balance 3.deposit 4.withdraw
  //allows us to continously cycle through until exit command
  //sets up conditions for while loop such that the inputted information gets written to a .txt file upon 'exit' command
id=0;
x=0;

int accounts[id];

run=true;
while (run) //i actually dont know if this is valid syntax in c++, ive only used it in python. So we may have to change it, just as a warning.
{
  cout<<"1 - CREATE ACCOUNT \n2 - CHECK BALANCE \n3 - WITHDRAW \n4 - DEPOSIT \nType 'E' when done."<<endl;
  cin>>action; //takes in the command of what the user is going to do

//--- TO DO ---
//  Create account class
//  Give the account class methods that allow us to create an account, get account balance, withdraw, deposit, etc;
//  enter those methods into their respective switch statements in main, s.t. the respective cases in the switch statement perform their intended tasks

  switch (action)
  {
    case '1': //create account option
      {
        cout<<"\nCreate an account: "<<endl;
        if (id < 10) //checks for limit on amount of accounts already created, the max should be 10.
        {
            //code block to create an account
            //cout<<"Enter Full Name: "<<endl;
            //getline(cin,fullName);
            //cin.get();
            //cout<<fullName<<endl;

            accounts[id]=x;
            id++;
            x++;
            cout<<"Account created."<<endl;
      }

      else
      {
        cout<<"\nLimit on amount of accounts reached."<<endl; //yells at the user for creating too many accounts.
      }
      //cout<<"\nAccounts Created: "<<id<<endl;
      break;
    }

    case '2':  //check account balance option
      {
        cout << "\nYour Balance is: " /*<<first.showBalance()*/<< endl;
        break;
      }

    case '3': //withdraw from account option
      {
        cout << "\nHow much would you like to withdraw?: "<<endl;
        cin>>withdrawal;
      //appropriate methods for withdrawing from balance
        break;
      }
    case '4': //deposit into account option
      {cout << "\nHow much would you like to deposit?: "<<endl;
      cin>>deposit;
      //appropriate methods for depositing into balance
      //first.deposit(400.0); <<instead of 400 we would want to have a variable i think
      break;}

    case 'e':case 'E': //exit command
    {  run=false;
      break;}

    case 'd':case 'D':
    {  cout<<"name: "<<endl;
      getline(cin,fullName);
      cout<<"balance: "<<endl;
      cin>>balance;

      account account1(fullName,balance);
      account account2();


      break; }
    /*case 'd':
      for (int i=0;i<=9;i++)
        {
          cout<<accounts[i]<<" ";
        }
        //printArray(accounts);
      break;*/

    default: //cant remember if the syntax is "case default" or just "default", ill have to google it
    {  cout<<"\nInvalid command."<<endl;
      break; }
  }


  //accountFile.open("account.txt","w"); //again we might wish to check the syntax on this, but it should open the output file so we can write to it

  //accountFile>>accountsArray; //writes the accountsArray data to the output file

  cout<<endl;
}
  cout<<"Loop exited successfully."<<endl;
  return 0;
}

//function definitions
/*void printArray(int arr[]) // cout each value in the array
{
    for (int i=0;i<=9;i++)
    {
      cout<<array[i]<<" "<<endl;
    }
}*/
