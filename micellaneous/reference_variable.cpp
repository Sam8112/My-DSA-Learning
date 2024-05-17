#include<iostream>
using namespace std;
        
int main(){
    
    int i=5;

    // same variable with different name
    int &j=i;
    i++;
    cout << "Before " << i << endl;
    j++;
    cout << "After " << j << endl;

    // making a int variable in dynamic mem 
    int *ptr = new int;
    // 'new' makes a memory in heap and returns an address which is stored in a pointer 
    
    //---------------------------------------------------------------------------------------------------------//

    // making array in dynamic memory --> Heap memory 
    int n;
    cin >> n; 
    int *arr= new int[n]; 
    for(int i=0; i<n;i++){
        arr[i]=i+1;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    cout << "----------------------------------" << endl;

    
    int row,col;
    cin >> row >> col;

    // making 2D array in dynamic memory
    int **brr = new int*[row];

    for (int i=0;i<row;i++){
        brr[i] = new int[col];
    }

    //taking input
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cin >> brr[i][j];
        }
    }
    
    // printing output
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    //releasing memory
    delete ptr;

    delete []arr;

    for(int i=0;i<row;i++){
        delete [] brr[i];
    }
    delete []brr;

    cout << endl  << "Finished clearing memory succesfully " << endl;
       
    return 0;
}