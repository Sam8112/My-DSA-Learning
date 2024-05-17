#include<iostream>
using namespace std;

// for recursion things are mandatory 
// base condition
// recursive relation
//processing( print, updation etc.)

int factorial(int n){
    
    // base case
    if(n==0){
        return 1;
    }

    //recursive reln
    return n * factorial(n-1);
}

int power( int n){
    // base case
    if(n==0){
        return 1;
    }

    //recursive relation
    return 2*power(n-1);
}

void print1(int n){
    if(n==0){
        return;
    }
    // tail recursion
    cout << n << endl;
    print1(n-1);
}

void print2(int n){
    if(n==0){
        return;
    }
    // head recursion
    print2(n-1);
    cout << n << endl; 
}


int main(){
    int n;
    cin >> n;
    cout << endl;
    int ans1= factorial(n);
    int ans2= power(n); 
    print1(n);
    cout << endl;
    print2(n);
    cout << endl;
    cout <<  n <<"! = " << ans1 << endl <<"2^" << n <<" = " <<  ans2;
          
    return 0;
}