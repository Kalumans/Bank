#include <fstream>
#include <string>
#include "account.h"
account::account(void)
{
  name=" ";
  balance=0.00;
}
account::account(string name,double balance)
{
  fullName=name;
  balance=balance;
}
