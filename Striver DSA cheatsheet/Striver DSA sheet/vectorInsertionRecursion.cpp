#include <iostream>
#include <vector>
using namespace std;

vector<int> printNos(int n) {
    vector<int> num;
    for (int i = 0; i < n; i++) {
        num.push_back(i + 1);
    }
    return num;
}

int main() {
    int n;
    cin >> n;
    vector<int> result = printNos(n);

    // Print the elements of the vector
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
