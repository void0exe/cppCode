#include <bits/stdc++.h>
using namespace std;

void rotatedS(vector<int> arr,int high,int low,int target){
    while(high>=low){   
        int mid=(high+low)/2;
        if(arr[mid]==target){
            cout<<mid;
            return;
        }
        if(arr[low]<arr[mid]){
            if(arr[mid]>target && target>=arr[low]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<target && target<=arr[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }
    cout<<-1;

}
int main(){
    vector<int> arr={3,4,5,1,2};
    int high=arr.size()-1;
    int low=0;
    int target=2;

    rotatedS(arr,high,low,target);
}