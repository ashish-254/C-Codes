#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2,s3,s4;
    int a,b,c,d;
    cin>>s1>>s2;
    a=s1.length();
    b=s2.length();
    cout<<a<<" "<<b<<endl;
    s3=s1+s2;
    cout<<s3<<endl;
  	s4=s1[0];
  	s1[0]=s2[0];
  	s2[0]=s4[0];
  	cout<<s1<<" "<<s2;
    return 0;
}
