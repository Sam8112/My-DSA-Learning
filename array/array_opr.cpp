#include<iostream>
using namespace std;

//swap logic
void vwap(int a,int b){
    int temp;
    a=temp;
    a=b;
    b=temp;
}
// reverse function
void reverseArr(int arr[], int n){
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            //or vwap
            swap(arr[i],arr[i+1]);
        }  
    } 
}
//function for printing an array
void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } 
    cout << endl;
}

int main(){
    int arr[]={1,2,4,5,7,8};
    reverseArr(arr,6);
    printArr(arr,6);    
    int brr[]={15,23,14,52,71};
    reverseArr(brr,5);
    printArr(brr,5);    
    return 0;
}