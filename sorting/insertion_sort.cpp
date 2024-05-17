#include<iostream>
using namespace std;

void inserionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
            arr[j+1]=arr[j];
            } 
            else{
                break;
            }
        }
        arr[j+1]=temp;
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
    insertionSort(arr,5);
    cout << endl;
    printArr(arr,5);     
    return 0;
}