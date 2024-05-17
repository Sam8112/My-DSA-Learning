#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<int> &vect){
    for(int x:vect){
        cout << x << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int> &vect,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(vect[i]>vect[j]){
                swap(vect[i],vect[j]);
                printArr(vect);
            }
        }
    }
}
        
int main(){   
    vector<int> vect{2,5,1,0,7,6};
    cout << "Before sorting "<< endl;
    printArr(vect);
    bubbleSort(vect,vect.size());
    cout << "After sorting "<< endl;
    printArr(vect);

    return 0;
}