#include <iostream>
#include <bank.h>
#include <string>
  
  using namespace std;
  
 
 
 
 
 int main()
 {
      string fullName
      
      cout << "PLease Enter The name of account holder: ";
      getline(cin, fullName);
      account first(fullName);
 
      initArrays(); //initalize arrays 
      return 0;
  
  }
   
   void printArray(int array[])
  { 
    for (int i=0;i<9;i++) // goes through each value/objects 
    {
      cout<< array[i] << " ";
    }
     cout<<endl;
     
    }
    
    first.desposit(400.0);
    cout << "Your Balance is " << first.showBalance() << endl;
    
    cout << " How much do you wann withdraw?: "
