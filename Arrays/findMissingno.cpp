#include <bits/stdc++.h>
using namespace std;

//Better 
void missingNo(int arr[],int n){
    int hash[10] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int i=1;i<=10;i++){
        if(hash[i]==0){
            cout<<i;
        }
    }
}

int main(){
    int n = 7;
    int arr[] = {1,3,4,6,7,9};
    missingNo(arr,n);

}

//Optimal
// Sum of n No's = (n*(n+1))/2 