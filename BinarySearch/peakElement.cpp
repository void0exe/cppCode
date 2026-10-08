#include <bits/stdc++.h>
using namespace std;

int peakE(vector<int> arr,int high,int low){
    high = arr.size()-2;
    low=1;
    while(high>=low){   
        int mid=(high+low)/2;

        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[mid]<arr[mid-1]){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={1,2,3,1};
    int high=arr.size()-1;
    int low=0;
    cout<<peakE(arr,high,low);
}