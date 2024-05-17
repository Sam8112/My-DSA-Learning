//In this problem we have to find the missing no. in the array
// for example we have an array 1,2,3,5,6,7
// output = 4

#include<iostream>
using namespace std;

//Function to find the maximum no. in the array in order to find the sum
int maximumNumber(int arr[],int n){
    int i;
    for(i = 1;i < n;i++){
        if(arr[0] < arr[i])
        arr[0] = arr[i];     
  }
  return arr[0];
}

//taking the sum of the array
int arraySummation(int arr[],int n){
    int add=0;
    for(int i=0;i<n;i++){
        add=add+arr[i];
    }
    return add;
}

int main(){
    cout << endl;
    int arr[]={1,2,3,5,6};
    int sum1=arraySummation(arr,5);
    int max=maximumNumber(arr,5);
 //after getting the highest no. finding sum of natural no.
    int sum2=(max*(max+1)/2);
    
 //Subtracting the sum of the array with the overall sum
    cout << "Missing number in the array is "<< sum2-sum1 << endl; 
    cout << endl;
    return 0; 
}