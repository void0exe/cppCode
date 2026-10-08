#include <bits/stdc++.h>    
using namespace std;

double Pow(double x , long long n){
    if(n==0){
        return 1;
    }
    
    if(n<0){
        x=1/x;
        n=-n;
    }

    return x*Pow(x,n-1);
   
}

int main(){
    double x=2.0000;
    int n=-2;
    cout<<Pow(x,n);
}