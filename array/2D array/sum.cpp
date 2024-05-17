#include<iostream>
#include<climits>
using namespace std;

void printArr(int arr[][4],int row, int col){
    for(row=0;row<3;row++){
        for(col=0;col<4;col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    } 
}

int sumRow(int arr [][4], int row,int col){
    
    for(row=0;row<3;row++){
        int sum=0;
        for(col=0;col<4;col++){
            sum+=arr[row][col];
        }
        cout<<"row "<< row << " --> "<<sum<<endl;
    }

}  
void maxRowSum(int arr[][4],int row , int col){
    int maxi= INT_MIN;
    int rowIndex=-1;
    for(row=0;row<3;row++){
        int sum=0;
        for(col=0;col<4;col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=row;
        }
    }
    cout << "The maximum sum is "<< maxi << endl;
    cout << "Max row is at rowindex "<< rowIndex << endl;
}   

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    printArr(arr,3,4); 
    cout << "Sum of rows "<< endl;
    sumRow(arr,3,4);
    maxRowSum(arr,3,4);

    return 0;
}