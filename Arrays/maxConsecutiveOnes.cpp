#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=20;
    int arr[]={1,1,0,0,1,1,1,0};

    int count = 0;
    int maxi = 0;

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }
        else{
            if(count>maxi){
                maxi=count;
                count=0;
            }
        }
    }

    cout<<maxi;
}