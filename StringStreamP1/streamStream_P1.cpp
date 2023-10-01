#include <sstream>
#include <vector>
#include <iostream>
using namespace std;


// stuff 

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> s; 
    
    stringstream newStr(str);
    
    char charIn = '0'; 
    int intIn = 0,count = 0; 
    
    for(int i = 0; newStr >> intIn >> charIn; i++)
        s.push_back(intIn);

    newStr >> intIn; 
        s.push_back(intIn);
    // new comment
        
    return s; 
}

int main() {
    string str = "23,32,21";
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}