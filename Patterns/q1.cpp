// o/p 1234
//     1234
//     1234
//     1234  
#include<iostream>
using namespace std;
        
int main(){
    int n=4;
    cout << "4 is Entered" << endl;
    for(int i=1; i<=n; i++){
        for (int j=1;j<=n;j++){
            cout << j << " ";
            //n-j+1 for reversing
        }
        cout << endl;
    }
    cout << endl;

// o/p 1 2 3
//     4 5 6
//     7 8 9
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }  
    cout << endl;

// o/p *
//     * *
//     * * *
//     * * * *
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

// o/p 1
//     2 2
//     3 3 3 
//     4 4 4 4
     
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i <<" ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
    