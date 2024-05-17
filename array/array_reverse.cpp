#include<iostream>
using namespace std;

//reverse function
void reverseArr(int arr[], int n){
    int start=0;
    int end=n-1;
     while(start<=end){
        swap(arr[start],arr[end]);
        start++; end--;
     }
}
//print array function
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
}
int main(){
    int arr[]={1,2,3,4,5};
    int brr[]={6,5,4,3,2,1};

    reverseArr(arr,5);
    reverseArr(brr,6);

    printArr(arr,5);
    printArr(brr,6);

    return 0;
}