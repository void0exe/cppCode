#include <bits/stdc++.h>    
using namespace std;

void para2(string &s,int n,vector<string> &arr,int Opara,int Cpara){
    if(Cpara == Opara && Opara== n){
        arr.push_back(s);
        return;
    }

    if(n>Opara){
        s.push_back('(');
        para2(s,n,arr,Opara+1,Cpara);
        s.pop_back();
    }
    if(Opara>Cpara){
        s.push_back(')');
        para2(s,n,arr,Opara,Cpara+1);
        s.pop_back();
    }
}

vector<string> para1(int n){
    string s = "";
    vector<string> arr;

    para2(s,n,arr,0,0);
    return arr;
}
int main(){
    int n=3;
    vector<string> str = para1(n);
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<endl;
    }
}