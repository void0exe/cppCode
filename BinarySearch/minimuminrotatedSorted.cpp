#include <bits/stdc++.h>
using namespace std;

int minimumTar(vector<int> arr,int high,int low,int tar){
    while(high>=low){
        int mid=(high+low)/2; //high-(high-low)/2

        if(arr[mid]==tar){
            return tar;
        }

        if(tar>arr[mid]){
            tar=arr[mid];
        }
        return tar;

        if(arr[high]>arr[mid]){
            if(arr[high]>=tar && tar>=arr[mid]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }else{
            if(tar>=arr[low] && arr[mid]>=mid){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
    }
}

int main(){
    vector<int> arr={4,5,6,7,0,1,2,3};
    int high=arr.size();
    int low=0;
    int tar=INT_MAX;

    minimumTar(arr,high,low,tar);
}