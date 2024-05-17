#include<iostream>
using namespace std;

//bubble sort --> Works on the principle of swapping adjacent numbers if left is greater than right
void bubbleSort(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

//insertion sort --> revolves around finding out the index of minimum no. and swapping it with the i'th(starting from the left) term
void insertionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
        
int main(){
    int arr[]={2,4,5,1,0,3,7,11,6,4};
    cout << "array before sort: ";
    printArr(arr,10); 
    cout << endl;
    insertionSort(arr,10);
    // bubbleSort(arr,10);
    cout << "array after sorting: "; 
    printArr(arr,10); 
    return 0;
}