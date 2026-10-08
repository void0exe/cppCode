#include <bits/stdc++.h>
using namespace std;

void searchI(vector<int> arr,int high,int low,int x){

    int ans = arr.size();

    while(high>=low){
        int mid = (high+low)/2;
        if(arr[mid]>=x){
            // if(x==arr[mid]){
            //     ans=mid+1;
            //     high = mid-1;
                
            // }else{
                high = mid-1;
                ans=mid;
            // }
            
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans;
}

int main(){
    vector<int> arr={1,3,5,6};
    int high = arr.size()-1;
    int low = 0;
    int x=2;

    searchI(arr,high,low,x);
}