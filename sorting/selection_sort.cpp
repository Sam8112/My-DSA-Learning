#include<iostream>
using namespace std;

void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        // loop for finding out the minimum element in the array and assigning it the minimum index
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minIndex])
                minIndex=j;
        }
        //swapping/placing minimum index to its correct position
        swap(arr[minIndex],arr[i]);
    }
}

void printArr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
}      

int main(){
    int arr[]={64,25,12,22,11}; 
    printArr(arr,5); 
    cout << endl;
    sort(arr,5);
    cout << endl;
    printArr(arr,5);     
    return 0;
}