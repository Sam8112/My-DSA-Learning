#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
}

//after each ith loop the ith element gets in the right place
void sort(int arr[],int n){
    for(int i=1;i<n;i++){
        //for round n to n-1
        bool swapped= false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            //already sorted
            break;
        }
    }
}
    
int main(){
    int arr[]={64,25,12,22,11}; 
    printArr(arr,5); 
    cout << endl;
    sort(arr,5);
    cout << endl;
    printArr(arr,5);     
    return 0;
}