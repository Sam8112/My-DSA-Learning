#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
}

bool isSorted(int arr[],int n){
    if(n==0||n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    } else{
        bool remainingPart = isSorted(arr+1,n -1);
        return remainingPart;
    }
}

bool linearSearch(int arr[],int n,int key){
    printArr(arr,n);
    //base case
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }else{
        bool remainingPart = linearSearch(arr+1,n -1,key);
        return remainingPart;  
    }
}
        
int main(){
    int arr[5]={2,1,7,8,9};
    // bool ans = isSorted(arr,5);  
    // if(ans){
    //     cout << "Array is sorted " << endl;
    // } else{
    //     cout << "Array not sorted " << endl;
    // }
    bool ans=linearSearch(arr,5,4);
    if(ans){
        cout << "Element found " << endl;
    } else{
        cout << "Element not found " << endl;
    }
    
    return 0;
}