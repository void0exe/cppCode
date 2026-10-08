#include <bits/stdc++.h>
using namespace std;

//Extraction of Digit
void Extraction(int n){
    
    while(n>0){
        int lastDigit=n%10;
        cout<<lastDigit<<" ";
        n = n/10; //T.C => O(log10(n))
    }

}
void Extraction2(int n){
    int count = (int)(log10(n)+1); //T.C => O(log10(n))
    cout<<count;
}

//Revese a Digit
int DigitReverse(int n ){
    int revNo = 0;
    while(n>0){
        int lastDigit=n%10;
        n = n/10; 
        revNo = (revNo*10)+lastDigit;
    }
    cout<<revNo;
}

//Armstrong :- \
num = 371 if cube of individual digits is equal to the num itself hence Armstrong no

//Print all the Divisor
int allDivisor(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<(i)<<" ";
            if((n/i)!=i){ //6/6=1 which has already taken
                cout<<n/i<<" ";
            }
        }
    }
}


int main(){
    int n = 7897;
    // Extraction(n);
    // Extraction2(n);
    // DigitReverse(40100);//40100 -> 104
    allDivisor(36);
}