#include<iostream>
using namespace std;
        
int main(){
    int n=45;
    int arr[32];
    int i=0;
    while(n!=0){
        
        int rem= n%2;
        n=n/2;
        arr[i++]=rem;
    }
    for(int j=i-1;j>=0;j--){
        cout << arr[j];
    }    
    return 0;
}