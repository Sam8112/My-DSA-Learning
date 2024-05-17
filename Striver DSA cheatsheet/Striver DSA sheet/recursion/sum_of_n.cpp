// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

long long sumFirstN(long long n) {
    // Base case
    if(n<1){
        return 0;
    }
    //processing    
    long long sum=n;
    
    //recursive call
    long long ans=sum+ sumFirstN(n-1);
    return ans;
}

int main() {
    long long n;
    cin >> n;
    long long ans = sumFirstN(n);
    cout << ans << endl;
    return 0;
}