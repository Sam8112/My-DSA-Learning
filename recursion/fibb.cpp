/*
#include<iostream>
using namespace std;

// int fibb(int n){
//     // base case
//     if(n==0 ){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }

//     // recursive relation
//     int ans= fibb(n-1)+ fibb(n-2);
//     return ans;
// }
   
   void reachHome(int src, int dest) {
    
    cout << "source " << src  << " destination " << dest << endl;
    //base case
    if(src == dest) {
        cout << " pahuch gya " << endl;
        return ;
    }

    //processing - ek step aage badhjao
    src++;

    //recursive call
    reachHome(src, dest);

}

int main(){
    int n;
    cout << "Enter n " << endl;
    cin >> n;
    cout << fibb(n) << endl;
    int dest = 10;
    int src = 1;

    cout << endl;

    reachHome(src, dest);
         
    return 0;
}
*/ 
#include<iostream>
using namespace std;

void sayDigit(int n, string str[]) {
    // base condition
    if (n == 0) {
        return;
    }

    // processing
    int digit = n % 10;
    n = n / 10;
    
     // recursive call for the remaining digits
    sayDigit(n, str);
    
    // print the digit in words
    cout << str[digit] << " ";
}

int main() {
    int n;
    cout << "Enter n: ";
    string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> n;

    // handle the case when n is 0 separately
    if (n == 0) {
        cout << str[0];
    } else {
        // call the function to print the digits in words
        sayDigit(n, str);
    }

    return 0;
}
