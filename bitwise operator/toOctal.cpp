#include<iostream>
using namespace std;
        
int main(){
    int n=32;
    //make an array that can take upto 32 bits of a number
    int arr[32];
    int i=0;
    while(n!=0){
        int rem= n%8;
        n=n/8;
        arr[i++]=rem;
    }
    for(int j=i-1;j>=0;j--){
        cout << arr[j];
    }    
    return 0;
}