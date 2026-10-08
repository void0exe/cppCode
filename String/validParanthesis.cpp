#include <bits/stdc++.h>
using namespace std;

string validParanthesis(string s){
    int counter = 0;
    string s1 = "";
    for(char ch : s){
        if(ch == '('){
            if(counter>0){
                s1+=ch;
            }
            counter++;
        }else if(ch == ')'){
            counter--;
            if(counter>0){
                s1+=ch;
            }
            
        }
    }
    return s1;
}

int main(){
    string s = "(())";
    cout<<validParanthesis(s);
}