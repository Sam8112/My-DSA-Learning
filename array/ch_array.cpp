#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a'&& ch<='z'){
    return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkPalindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(toLowerCase(name[s])!=toLowerCase(name[e]))
        return 0;
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void reverse(char name[],int n ){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[]){
    int count=0;
    for (int i=0;name[i] !='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[10];
    cout << "Enter your name " << endl;
    cin >> name;
    // ch[2]='\0'; (NULL CHARACTER)
    cout << "Your name is " << name << endl;
    int letters=getLength(name);
    cout << "Total letters: "<< letters << endl;
    // for(int i=0;i<letters;i++){
    //     cout << toLowerCase(name[i]);
    // }
    // cout<< endl;
    reverse(name,letters);
    cout <<"Reversed name: "<< name << endl;
    cout << "Palindrome not case sensitive (0-false,1-true): "<< checkPalindrome(name,letters)<< endl;
    
    return 0;
}
