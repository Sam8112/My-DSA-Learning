#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
	//Write your code here
	int a=n;
    int b=n;
	int count=0;
	
	while(a!=0){
		int digit=a%10;
		a=a/10;
		count++;
	}
	
	int ans=0;
	while(b!=0){
		int digit=b%10;
		ans=ans+pow(digit,count);
		cout << ans << endl;
		b=b/10;
	}
	 
	if(ans==n){
		return true;
	}else{
		return false;
	}
}

int main(){
    int n=1634;
    bool ans=checkArmstrong(n);
    cout << ans;
    return 0;
}
