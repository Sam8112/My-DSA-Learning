#include<iostream>
#include<vector>
using namespace std;

void recursiveFunction(int n, vector<string>& ans) {
    if (n == 0) { // Base case
        return;
    }

    // Insert element in the array
    ans.push_back("Coding Ninjas");

    // Call recursive function
    recursiveFunction(n - 1, ans);
}

vector<string> printNTimes(int n) {
    vector<string> ans;

    // Calling recursive function
    recursiveFunction(n, ans);

    return ans;
}     
int main(){
    int n; 
    cin >> n;
    vector<int> result = printNTimes(n); 
    cout << result; 
    
    return 0;
}