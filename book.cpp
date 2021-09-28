#include<iostream>
#include<string.h>
using namespace std;
class book
{
 private:
 char auname[20],boo[30];
 long int isbn;
 float price;
 public:
 book(char an[20],char bn[30],long int is,float p)
 {
   strcpy(auname,an);
   strcpy(boo,bn);
   isbn=is;
   price=p;
 }
 void show()
 { cout<<"\n.......................................\n";
  cout<<"book name: "<<boo<<endl<<"author name: "<<auname<<endl<<"ISBN    no.:"<<isbn<<endl<<"price: "<<price<<endl;
  }
};

int main()
{
 char a[20],b[30];
 long int i;
 float p;
 cout<<"enter book name: ";
 gets(b);
 cout<<"enter author name: ";
 gets(a);
 cout<<"enter ISBN number: ";
 cin>>i;
 cout<<"enter price: ";
 cin>>p;
 book o(a,b,i,p);
 o.show();
 return 0;
 }


