#include <bits/stdc++.h>
using namespace std;

// void reverse(int arr[], int n){
//     if(n<0){
//         return;
//     }
//     cout<<arr[n];
//     reverse(arr,n-1);
// }

// int main(){
//     int n=10;
//     int arr[]={2,3,4,2,4,5,6,3,5,6};
//     reverse(arr,n-1);    
// }

//Two Pointer
void reverse(int arr[], int n){
    int i=n-1;
    for(int j=0;j<i;j++){
        if(j<i){
            swap(arr[j],arr[i]);
            i--;
        }else{
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main(){
    int n=10;
    int arr[]={2,3,4,2,4,5,6,3,5,6};
    reverse(arr,n);    
}