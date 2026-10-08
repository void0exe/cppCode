#include <bits/stdc++.h>
using namespace std;


// int fib(int n) {
//     if(n==0||n==1){
//         return n;
//     }

//     return fib(n-1)+fib(n-2);
// }

// int main(){
//     cout<<fib(6);
// }



//itterative 
int main(){
    int n=5;

    int fib[n+1];
    fib[0]=0;
    fib[1]=1;

    for(int i=2;i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }

    for(int i=0;i<=n;i++){
        cout<<fib[i]<<" ";
    }
}
