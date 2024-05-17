#include<iostream>
#include<vector>
#include <numeric>
using namespace std;
        
int main(){
    vector<int> vect{ 10, 20, 30 };
    for (int x : vect){
        cout << x << " ";
    }    
    cout << endl;

    vector<int> vect1{ 10, 20, 30 };
 
    vector<int> vect2(vect1.begin(), vect1.end());
 
    for (int x : vect2){
        cout << x << " ";
    }
    cout << endl;

    vector<int> vect3(10);
 
    // initializing using fill() function
    int value = 5;
    fill(vect3.begin(), vect3.end(), value);
 
    // printing vector
    for (int x : vect3){
        cout << x << " ";
    }
    cout << endl;

    vector<int> vec(5);
 
    // initializing using iota()
    iota(vec.begin(), vec.end(), 1);
 
    // printing the vector
    for (int i = 0; i < 5; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}