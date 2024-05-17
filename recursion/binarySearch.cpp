#include<iostream>
using namespace std;

bool binarySearch(int arr[],int s,int e, int key){
    
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    } else{
        return binarySearch(arr,s,mid-1,key);
    }
}
        
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    bool ans= binarySearch(arr,0,7,0); 
    if(ans){
        cout << "Element is found " << endl;
    }else{
        cout << "Element is not present " << endl;
    }
    
    return 0;
}