#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
	
	stringstream ss(str);   //??
	vector<int> result;
	char ch;
	int tmp;
	while(ss >> tmp) 
	{      //??
	    result.push_back(tmp);
	    ss >> ch;           //??
	}
	return result;
    
}

int main() {
    string str="23,4,56";
    //cin >> str;
    cout<<str<<endl;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
