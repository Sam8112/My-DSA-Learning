#include<iostream>
using namespace std;

void reverse(string &s){
    int n=s.size();
    int start=0;
    int end=n-1;
    while(start<end){
        swap(s[start++],s[end--]);
    }
}

// string lengthOfLastString(string s)
        
int main(){
    string s="fly me to the moon";
    // string ans = lengthOfLastString(s);
    reverse(s);
    cout << s;
        
    return 0;
}