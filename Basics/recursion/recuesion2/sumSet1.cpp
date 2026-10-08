#include <bits/stdc++.h>    
using namespace std;

void sumSet1(int idx,int sum,vector<int> &subSets,int n,vector<int> &arr){
    if(n==idx){
        subSets.push_back(sum);;
        return;
    }

    sumSet1(idx+1,sum+arr[idx],subSets,n,arr);

    sumSet1(idx+1,sum,subSets,n,arr);

}

vector<int> sumSet(vector<int> arr){
    int idx = 0;
    int sum =0;
    int n = 3;
    vector<int> subSets;
    sumSet1(idx,sum,subSets,n,arr);

    return subSets;
}


int main(){
    vector<int> arr = {3,1,2};
    
    vector<int> val = sumSet(arr);
    for(int i=0;i<val.size();i++){
        cout<<val[i]<<endl;
    }
}