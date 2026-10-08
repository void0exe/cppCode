#include <bits/stdc++.h>
using namespace std;

//using Recursion
void reverse(vector<int> &arr,int i,int j){
    if(i>=j){
        return;
    }
    swap(arr[i],arr[j]);

    reverse(arr,i+1,j-1);
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    reverse(arr,0,arr.size()-1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
}