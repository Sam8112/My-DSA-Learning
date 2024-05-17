// HARD
//Find the maximum element of a mountain array

#include<iostream>
using namespace std;

int binarySearch(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if (arr[mid]< arr[mid + 1]){
            s=mid+1;
        }
        else {
            e=mid;
        }
        return s;
    }
}
        
int main(){
    int arr[]={1,11,18,21,3};  
    int index = binarySearch(arr,5);
    cout<<"Highest element in the array is at index "<< index <<endl;
    return 0;
}