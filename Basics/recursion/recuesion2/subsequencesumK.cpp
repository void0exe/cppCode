#include <bits/stdc++.h>    
using namespace std;

// void printSub(vector<int> arr , vector<int> ds , int n , int idx ,int k){
//     if(idx>=n){
//         int sum = 0;
//         for(int i=0;i<ds.size();i++){
//             sum+=ds[i];
//         }

//         if(sum==k){
//             for(int i=0;i<ds.size();i++){
//                 cout<<ds[i];
//             }
//             cout<<endl;
//         }
//         return;
//     }

//     ds.push_back(arr[idx]);
//     printSub(arr,ds,n,idx+1,k);
//     ds.pop_back();
//     printSub(arr,ds,n,idx+1,k);
// }

// int main(){
//     vector<int> arr = {4,9,2,5,1};
//     int n = arr.size();
//     int k = 10;
//     vector<int> ds;
//     printSub(arr,ds,n,0,k);

//     return 0;
// }


//2nd way
void  printSub(vector<int> arr , vector<int> ds , int n , int idx,int sum,int s){
    
    if(idx>=n){
        if(sum==s){
            for(int i=0;i<ds.size();i++){
                cout<<ds[i];
            }
        }
    }

    ds.push_back(arr[idx]);
    s+=arr[idx];
    printSub(arr,ds,n,idx+1,sum,s);
    s-=arr[idx];
    ds.pop_back();
    
    printSub(arr,ds,n,idx+1,sum,s);
}

int main(){
    vector<int> arr = {4,9,2,5,1};
    int n = arr.size();
    int sum = 10;
    vector<int> ds;
    printSub(arr,ds,n,0,sum,0);
}