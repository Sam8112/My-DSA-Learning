// Online C++ compiler to run C++ program online
#include<iostream>
#include<vector>
using namespace std;

long long fact(long long n){
    
    //base case
    if(n==0||n==1){
        return 1;
    }
    // processing
    long long ans=n*fact(n-1);
    return ans;
    
}

vector<long long>factorialNumbers(long long n) {
    vector<long long> ans;
    int count=0;
    for(int i=1;i<=n;i++){
        if(fact(i)<=n){
            ans.push_back(fact(i));
        }else{
            break;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<long long> ans = factorialNumbers(n);
    // cout  << ans << endl;
    
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    
    cout << endl;
    return 0;
}