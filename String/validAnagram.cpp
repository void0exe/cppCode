#include <bits/stdc++.h>
using namespace std;


//approach 1
//T.C = nlog(n);
bool ana(string s,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t){
        return true;
    }else{
        return false;
    }
}

int main(){
    string s = "anagram";
    string t = "naagram4";

    cout<<ana(s,t);
}