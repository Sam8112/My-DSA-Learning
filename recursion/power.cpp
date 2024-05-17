#include<iostream>
using namespace std;

int power(int n,int m){
    //base case
    if(m==0){
        return 1;
    }
    if(m==1){
        return n;
    }
    
    //recursive relation
    int ans=power(n,m/2);
    //whether m is even or odd
    if(m%2==0){
        return ans*ans;
    }else{
        return n*ans*ans;
    }
}
        
int main(){
    int n,m;
    cout << "Enter the number and power " << endl;
    cin >> n >> m;
    int ans=power(n,m); 
    cout << "Result is " << ans << endl;    
    return 0;
}