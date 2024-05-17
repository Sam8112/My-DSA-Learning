#include<iostream>
using namespace std;

int sumOfDivisors(int n){
    
    int ans=0;
	for(int i=1;i<=n;i++){
        int count=0;
		for(int j=1;j<=i;j++){
                if(i%j==0){
                	count=count+j;
                }
        }
        ans=ans+count;
    }
	return ans;
}
        
int main(){
    int n;  
    cin >> n;
    int ans=sumOfDivisors(n);
    cout << ans;
        
    return 0;
}