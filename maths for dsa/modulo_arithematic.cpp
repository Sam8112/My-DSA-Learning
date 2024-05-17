#include<iostream>
using namespace std;

int result(int x, int n, int m){
    int res=1;
    while(n>0){
        if(n&1){
            res=((res)*(x)%m)%m;
        }
        x=((x)%m * (x)%m)%m;
        n=n>>1;
    }
    return res;

}
        
int main(){ 
    int ans=result(2,5,7);
    cout << ans;   
    return 0;
}