#include <bits/stdc++.h>    
using namespace std;

void printSub(vector<int> arr , vector<int> ds , int n , int idx){
    if(idx>=n){
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        for(int i=0;i<ds.size();i++){
            cout<<ds[i];
        }
        return;
    }

    ds.push_back(arr[idx]);
    printSub(arr,ds,n,idx+1);
    ds.pop_back();
    printSub(arr,ds,n,idx+1);
}

int main(){
    vector<int> arr = {4,9,2,5,1};
    int n = arr.size();
    vector<int> ds;
    printSub(arr,ds,n,0);
}