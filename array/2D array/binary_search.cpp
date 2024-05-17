#include<iostream>
using namespace std;
int binarySearch(int arr[][4],int row, int col,int target){
    int s=0;
    int e=row*col-1;
    while(s<=e){
        
        int mid=s + (e-s)/2;

        int element=arr[mid/col][mid%col];
        if(element == target){
            return 1;
        }
        if (element < target){
            s=mid+1;
        }
        if (element > target){
            e=mid-1;
        }
    }
    return 0;
    
}
        
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int index= binarySearch(arr,3,4,10);
    if (index==1){
        cout << "Element found ";
    } else{
        cout << "Element not found ";
    }
        
        
    return 0;
}