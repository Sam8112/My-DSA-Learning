#include<iostream>
using namespace std;
int main(){

    //Taking array size input from the user
    int arr_size;
    cout<<"Enter the size of array:: ";
    cin>> arr_size;

    //Checking if the user has entered a valid no. for the array creation
    if (arr_size<0){
        cout << "Please enter a valid positive number "<< endl;
        return -1;
    } if(arr_size==0){
        cout << "No elements are entered, the array is empty " << endl;
        return 0;
    }

    //Now let's declare the array as its size has been taken from the user
    int arr[arr_size];

    //Let's fill our array with elements as ordered by the user
    cout<< "Enter the elements:: "<< endl;
    for(int i=1;i<=arr_size;i++){
        cout << "E" << i <<": ";
        cin >> arr[i];
    }  
    
    // Showing user the final array output
    cout << "Elements in the array are:: ";
    for (int i=1;i<=arr_size;i++){
        cout << arr[i] <<" ";
    }
    return 0;
}