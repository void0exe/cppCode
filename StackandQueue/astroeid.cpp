#include<bits/stdc++.h>
using namespace std;


vector<int> ast(vector<int> &arr){
    stack<int> st;

    vector<int> ans;

    for(int i =0;i<arr.size();i++){
        
        if(arr[i]>0){
            st.push(arr[i]);
        }else{
            while(!st.empty() && st.top()<abs(arr[i]) &&  st.top()>0){
                st.pop();
            }
            if(st.empty() || st.top()<0 ){
                st.push(arr[i]);
            }else if(abs(arr[i])==st.top()){
                st.pop();
            }
        }

        
    }
    
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int> arr = {5,10,-5};
    vector<int> ans = ast(arr);
    for(int i =0;i<ans.size();i++){
        cout<<ans[i];
    }

}

