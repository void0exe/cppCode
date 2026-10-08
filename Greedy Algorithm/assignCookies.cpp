#include<bits/stdc++.h>
using namespace std;

int findContendChildren(vector<int> &g , vector<int> &s){
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int m = g.size();
    int n = s.size();
    int l = 0; //children
    int r = 0; //cookies

    while(l<n){
        if(g[r]<=s[l]){
            r+=1;
        }
        l+=1;
    }

    return r;
}

int main(){
    vector<int> g = {1,5,3,3,4};
    vector<int> s = {4,2,1,2,1,3}; 
    cout<<findContendChildren(g,s);
}