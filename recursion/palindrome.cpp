#include<iostream>
using namespace std;

void reverse(string &str,int i,int j){
    cout << "call for " << str << endl; 
    //base case
    if(i>j){
        return;
    }
    //processing
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
}

bool checkPalindrome(string &str,int i){
    //base case
    if(i>str.length()-i-1){
        return true;
    }
    if(str[i]!=str[str.length()-i-1]){
        return false;
    } else{
        return checkPalindrome(str,i+1);
    }
}

int main(){
    string str="racecar";
    cout << str << endl;
    cout << endl;
    // reverse(str,0,str.length()-1);
    bool isPalindrome = checkPalindrome(str,0);
    if(isPalindrome){
        cout << "It is a Palindrome " << endl;
    }else{
        cout << "It is not a Palindrome" << endl;
    }
    cout << endl;
    

    return 0;
}