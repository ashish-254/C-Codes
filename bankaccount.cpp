#include<iostream>
#include<string.h>
using namespace std;
class bankac
{
 private:
 char cuname[20],actype[10];
 long int acnumber;
 float balance;
 public:
 bankac(char cn[20],char at[10],long int an,float ba)
 {
 strcpy(cuname,cn);
 strcpy(actype,at);
 acnumber=an;
 balance=ba;
 }
 void deposite()
 {long int amm;
  cout<<" enter ammount: ";
  cin>>amm;
  balance=balance+amm;
  }
   int withdraw()
   {
   long int with;
   cout<<" enter ammount for withdraw: ";
   cin>>with;
   if(with>balance)  {
   cout<<" not sufficient balance is left in your account"<<endl;
   return 0;
   }
   balance=balance-with;
   return 0;
   }
   void enquiry()
   {
   cout<<"\n your current account balance is : "<<balance<<endl;
   }
 };

 int main()
 { 
  char cn[20],at[10];
  char a,b;
  long int an;
  float ba;
  cout<<" enter your name: ";
  gets(cn);
  cout<<" enter your account type: ";
  gets(at);
  cout<<" enter your account number: ";
  cin>>an;
  cout<<" enter your current balance: ";
  cin>>ba;

  bankac o(cn,at,an,ba);
  cout<<"\n for deposite ammount, enter y otherwise n: ";
  cin>>a;
  if(a=='y'){
  o.deposite();}
  cout<<"\n for withdraw ammount, enter y otherwise n: ";
  cin>>b;
  if(b=='y'){
  o.withdraw();
  }
  o.enquiry();
  return 0;
}

