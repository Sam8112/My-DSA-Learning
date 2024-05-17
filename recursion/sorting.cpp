#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    } 
    cout << endl; 
}
void bubbleSort(int arr[],int n){
    //base condition
    if(n==0||n==1){
        return;
    }
    //recursive relation
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
}

void selectionSort(int arr[],int n){
    //base case
    if(n==0||n==1){
        return;
    }
    // recursive relation
    int i,j;
    for(i=0;i<n;i++){
        int minIndex=arr[i];
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
            minIndex=j;
            }
            
        }
        swap(arr[minIndex],arr[j]);
    }
    selectionSort(arr,n)

}
        
int main(){
    int arr[]={9,3,4,0,2,3,5,3,2,5}; 
    cout << "Unsorted array: ";
    printArr(arr,10);
    cout << endl;
    bubbleSort(arr,10);
    cout << "Sorted array: "; 
    printArr(arr,10);

      
        
    return 0;
}