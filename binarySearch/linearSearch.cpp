#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
     int arr[]={1,14,11,18,21,56,77,89,104,126};  
    cout << "Enter a Numnber to find for "<< endl;
    int key;
    cin >> key;
    int index = linearSearch(arr,10,key);
        if(index>=0){
            cout << "The Number is found at index "<< index+1 << endl;
    }else{
            cout << "Number not found "<< endl;;
    }
    return 0;
}   