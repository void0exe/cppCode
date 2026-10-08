#include <bits/stdc++.h>
using namespace std;

void print(int n,int cnt){
    if(n<cnt){
        return;
    }
    cout<<cnt<<" ";
    print(n,cnt+1);
}

void print2(int n){
    if(n<1){
        return;
    }

    print2(n-1);
    cout<<n<<" ";
}

int main(){
    int n=10;
    // print(n,1);
    print2(n);
}