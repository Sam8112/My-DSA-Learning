#include<iostream>
using namespace std;

int binSearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else{
           end=mid-1; 
        } 
    }
    return -1;
}
        
int main(){
    int arr[]={1,4,67,78,90,123,234};
    int size=7;
    int key=90;
    int index=binSearch(arr,size,key);
    if(index<0){
        cout << "Element is not found " << endl;
    }else{
        cout << "Element found at index " << index; 
    }  
        
        
    return 0;
}