#include <bits/stdc++.h>    
using namespace std;

long long findPower(long long a,long long b){
    if(b==0){
        return 1;
    }

    long long half = findPower(a,b/2);
    long long result = half*half;
        
    if(b%2==1){
        result = a*result;
    }   

    return result;
}

int countGoodNumbers(long long n) {
    return (long long)(findPower(5,n/2) * findPower(4,(n+1)/2));
};

int main(){
    cout<<countGoodNumbers(4);
}

    