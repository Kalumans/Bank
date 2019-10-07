#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

using namespace std;

class account
{
public:
    account(void);
    account(string name,double balance);
    //weekday(void);
    //virtual ~account(void);
  //  string toString(void);
  //  string getToday(void);
  //  string getTomorrow(void);
  //  string getYesterday(void);


private:
    string fullName;
    double balance;


    /*string week[7];
    void helper01(void);
    int helper02(string d);*/
};

#endif // WEEKDAY_H
