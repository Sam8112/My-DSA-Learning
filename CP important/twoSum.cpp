#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(int arr[],int target){
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j] == target){
                // vector<int> ans;
                // ans.push_back(i);
                // ans.push_back(j);
                return {i,j};
            }
        }
    }
    return {};
}

int main(){
    int arr[]={1,5,7,9,12};
    int target =14;

    vector<int> ans=twoSum(arr,target);  
    for (int x : ans) 
        cout << x << " ";
        cout << endl;
        
        
    return 0;
}