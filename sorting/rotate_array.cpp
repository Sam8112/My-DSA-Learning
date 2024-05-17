#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
}

void rotatArr(int arr[], int n, int k){
    int temp[n];
    for (int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }   
}


int main(){
    int arr[]={7,3,2,4,9,1};
    cout << "Initially the array was "<< endl;
    printArr(arr,6); 
    rotatArr(arr,6,3);
    cout << "Rotated array is "<< endl;
    printArr(arr,6); 
    return 0;
}