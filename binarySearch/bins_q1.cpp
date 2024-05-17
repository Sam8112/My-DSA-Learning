//In this problem we are given with an array 0 0 1 1 1 2 2 2 2 2
// we have to retun index of first and last occurence of the key given 
// i/p: 2        1
// o/p: 5 9      2 4 

#include<iostream>
using namespace std;

int firstOcc(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
            if(arr[mid]==key){
            // storing the ans and again going to left to check if any other is present and if found updating the ans 
                ans=mid;
                end=mid-1;
            }
            if(arr[mid]<key){
                start=mid+1;
            }else{
                end=mid-1;
            }
    }
    return ans;
}

int lastOcc(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
            if(arr[mid]==key){
            // storing the ans and again going to right to check if any other is present and if found updating the ans 
                ans=mid;
                start=mid+1;
            }
            if(arr[mid]<key){
                start=mid+1;
            }else{
                end=mid-1;
            }
        
    }
    return ans;
}
        
int main(){
    cout << endl;
    int arr[]={0,0,1,1,1,2,2,2,2,2};
    int index1=firstOcc(arr,10,1); 
    int index2=lastOcc(arr,10,1);
    cout<< "indices are "<< index1<<" "<< index2<< endl;
    cout << endl;
    return 0;
}