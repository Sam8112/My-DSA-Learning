#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }cout << endl;
}

//function to sort array using two pointer approach
void sortArr(int arr[], int n){
    int left=0;
    int right=n-1;
    int step=0;
    while(left < right){
        cout <<"step "<< step++ << endl; 
        printArr(arr,n);
        cout << endl;
        while(arr[left]==0){
            left++;  
        }
        while(arr[right]==1){
            right--;
        }
        if(left < right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}

int main(){
    int arr[]={1,1,0,0,0,0,1,0};
    sortArr(arr,8);
    // printArr(arr,8);  
    cout << "Array is sorted successfully! "<< endl;
    cout << " "<< endl;    
    return 0;
}