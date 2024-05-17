#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[],int s,int e){
    int pivot=arr[s];
    
    //count the elements that are less than or equal to pivot
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        } 
    }

    //place pivot at its right position
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);
    printArr(arr,10);
    
    //left and right fix
    int i=s;int j=e;

    while(i<pivotIndex && j> pivotIndex){

        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j> pivotIndex){
            swap(arr[i++],arr[j--]);
            printArr(arr,10);
            
        }
    }
    return pivotIndex;
}

void quickSort(int arr[],int s,int e){

    //base case
    if(s>=e){
        return;
    }

    int p= partition(arr,s,e);

    //left wala sort
    quickSort(arr,s,p-1);
    printArr(arr,10);
    
    //right wala sort 
    quickSort(arr,p+1,e);
    printArr(arr,10);

}

int main(){
    int arr[10]={5,3,6,3,8,9,4,8,0,2};
    int n=10;
    printArr(arr,n);
    quickSort(arr,0,n-1);
    printArr(arr,n);
  
    return 0;
}