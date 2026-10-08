#include <bits/stdc++.h>    
using namespace std;

void Nocons1(string &s,vector<string> &arr,int idx){ //why we put & in arr
    if(idx >= s.length()){
        arr.push_back(s);
        return;
    }

    Nocons1(s,arr,idx+1);
    s[idx] = '1';
    Nocons1(s,arr,idx+2);
    s[idx] = '0';
}

vector<string> fun(int n){
    string s(n,'0');
    vector<string> arr;
    Nocons1(s,arr,0);

    return arr;
}

int main(){
    int n=4;
    vector<string> str = fun(n);
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<endl;
    }
}