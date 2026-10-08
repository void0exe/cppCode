#include<bits/stdc++.h>
using namespace std;

int priority(char ch){
    if(ch=='^'){
        return 3;
    }else if(ch=='*' || ch=='/'){
        return 2;
    }else{
        return 1;
    }
}

string infixTopostfix(string s){
    stack<char> st;
    string ans = "";
    int i=0;

    while(i<s.size()){
        if(iswalnum(s[i])){
            ans+=s[i];//abcd^e-*+
        }else if(s[i]=='('){
            st.push(s[i]);
        }else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            if (!st.empty()) {
                st.pop();
            }
        }else{ //Important Case
            while(!st.empty() && st.top() != '(' &&
                                                    (priority(s[i]) < priority(st.top()) ||
                                                    (priority(s[i]) == priority(st.top()) && s[i] != '^'))){
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);//+*
        }
        i++;
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }

    return ans;
}

int main(){
    //strictly followed that this is a infix 
    string s = "a^b^c";

    cout<<infixTopostfix(s);
}