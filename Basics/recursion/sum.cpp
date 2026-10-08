#include <bits/stdc++.h>
using namespace std;

// int f(int n,int sum){
//     if(n==0){
//         return sum;
//     }
    
//     sum+=n;

//     return f(n-1,sum);  //return n+f(n-1) //optimal code writing
    
    
// }

int f(int n,int sum){
    if(n<1){
        return sum;
    }
    sum+=n;
    f(sum,n-1);
    return sum;
}

int main(){
    int n = 10;
    cout<<f(n,0);
    return 0;
}

//you are not returing the ans