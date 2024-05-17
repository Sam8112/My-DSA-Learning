#include<iostream>
using namespace std;

int findGcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}
        
int main(){
    int m;
    int n;
    cout << "Enter two numbers: ";
    cin >> m >> n;
    cout << "GCD of numbers "<< m << " and " << n << " is " << findGcd(m,n);
    return 0;
}