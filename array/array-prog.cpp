#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
} 

sortArr(int arr[], int n){
    //two pointer approach
    
    int i=0;
    int j=n-1;
    
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        if(arr[j]==2 && i<j){
            j--;
        }
        if(arr[i]==2 && arr[j]==0 && i<j){
            swap(arr[i],arr[j]);
        }
        if(arr[i]==2 && arr[j]==1 && i<j){
            swap(arr[i],arr[j]);
        }
        if(arr[i]==arr[j]&& i<j){
            j--;
        }
        if(arr[i]==1 && arr[j]==0 && i<j){
            swap(arr[i],arr[j]);
        }
    }
    cout << endl;
}

int main(){
    int arr[]={0,1,2,2,1,0,1,0,2,0};
    cout << "Initially the array was "<< endl;
    printArr(arr,10); 
    sortArr(arr,10);
    cout << "Sorted array is "<< endl;
    printArr(arr,10); 
    return 0;
}