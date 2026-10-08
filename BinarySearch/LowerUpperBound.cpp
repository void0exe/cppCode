#include <bits/stdc++.h>
using namespace std;


//Lower BOund
// void lb(int arr[],int low,int high,int x,int n){
//     while(high>=low){
//         int mid=(low+high)/2;
        
//         if(arr[mid]>=x){
//             high = mid-1;
//             x=mid;
//         }else{
//             low=mid+1;
//         }
//     }
//     cout<<x;
// }
// int main(){
//     int n=8;
//     int arr[n]={1,2,3,4,5,6,7,9};
//     int low = 0;
//     int high = n-1;
//     int x = 8;//

//     lb(arr,low,high,x,n);
// }

//Upper bound //arr[index]>x
// void lb(int arr[],int low,int high,int x,int n){
//     while(high>=low){
//         int mid=(low+high)/2;
        
//         if(arr[mid]>x){
//             high = mid-1;
//             x=mid;
//         }else{
//             low=mid+1; 
//         }
//     }
//     cout<<x;
// }
// int main(){
//     int n=8;
//     int arr[n]={1,2,3,4,5,6,7,8};
//     int low = 0;
//     int high = n-1;
//     int x = 5;//3

//     lb(arr,low,high,x,n);
// }