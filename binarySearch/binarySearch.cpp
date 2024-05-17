#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if (arr[mid]==key){
            return mid;
        } 
        if(arr[mid]<key){
            s=mid+1;
        } else {
            e=mid-1;
        }
    }
    return -1;
}
        
int main(){
    int arr[]={1,14,11,18,21,56,77,89,104,126};  
    cout << "Enter a Numnber to find for:";
    int key;
    cin >> key;
    int index = binarySearch(arr,10,key);
        if(index>=0){
            cout << "The Number is found at index:"<< index<< endl;
    }else{
            cout << "Number not found "<< endl;;
    }
    return 0;
}