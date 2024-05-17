#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }cout << endl;
}
        
int main(){
    int arr1[5]={1,2,5,7,9};
    int len1=5;
    int arr2[6]={2,3,5,6,8,10};
    int len2=6;
    int arr[11]={0,0,0,0,0,0,0,0,0,0,0};

    int index1 = 0;
    int index2 = 0;
    int mainArrayIndex = 0;

    while(index1 < len1 && index2 < len2) {
        if(arr1[index1] < arr2[index2]) {
            arr[mainArrayIndex++] = arr1[index1++];
            printArr(arr,11);
        }
        
        else{
            arr[mainArrayIndex++] = arr2[index2++];
            printArr(arr,11);
        }
        
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = arr1[index1++];
        printArr(arr,11);
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = arr2[index2++];
        printArr(arr,11);
    }  
        
        
    return 0;
}