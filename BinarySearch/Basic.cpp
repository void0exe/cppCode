#include <bits/stdc++.h>
using namespace std;

// void bSearch(int arr[],int low,int high,int n,int target){
//     if(low>high){
//         cout<<-1;
//     }
//     int mid = (low+high)/2;
    
//     if(arr[mid]==target){
//         cout<<mid;
//     }
//     else if(target>arr[mid]){
//         bSearch(arr,mid+1,high,n,target);
//     }else{
//         bSearch(arr,low,mid-1,n,target);
//     }

// }

// int main(){
//     int n=8;
//     int arr[n] = {23,24,28,31,35,39,45,50};
//     int target = 31;
//     int low=0;
//     int high=n-1;

//     bSearch(arr,low,high,n,target);
// }



//Iterative Approach
void bSearch(int arr[],int low,int high,int n,int target){

    while(high>=low){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            cout<<mid;
            break;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
        cout<<-1;
    }
}
int main(){
    int n=8;
    int arr[n] = {23,24,28,31,35,39,45,50};
    int target = 31;
    int low=0;
    int high=n-1;

    bSearch(arr,low,high,n,target);
}