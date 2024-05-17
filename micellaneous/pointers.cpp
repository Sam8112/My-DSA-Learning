#include<iostream>
using namespace std;
        
int main(){
    /*
    int i=20;
    int *p = &i;
    cout << i << " ";
    cout << &i << " ";
    cout << p << " ";
    cout << &p << " ";
    

    int arr[10];

    //value at p is equal to the address of first block of the array
    int *p=&arr[0];
    cout << "no. of blocks multiplied by size of each block of array: "<< sizeof(arr) << endl;
    cout << "size of pointer pointing at first location of array: " << sizeof(p) << endl;
    cout << "size of value stored in each block of array: " << sizeof(*arr) << endl;
    cout << "size of value " << p << endl;
    
    char ch[6]="abcde";
    char *c = &ch[0];
    cout << c << endl;
    cout << *c << endl;
    */

    int i=5;
    int *p = &i;
    int *q=p;
    // *q++;
    cout << q << endl;
    cout << i;
    return 0;
}