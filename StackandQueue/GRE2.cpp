#include<bits/stdc++.h>
using namespace std;

vector<int> finalGRE2(vector<int> &arr){
    stack<int> st;
    vector<int> nge;

    for(int i=0;i<arr.size()-1;i++){
        while(!st.empty() && st.top()<=arr[i%arr.size()]){
            st.pop();
        }
        if(i<arr.size()){
            nge[i]=st.empty() ? -1:st.top();
        }
        st.push(arr[i%arr.size()]);
    }
    return nge;
}

int main(){
    vector<int> arr = {2,10,12,1,11};
    vector<int> nge = finalGRE2(arr);
    
    for(int i=0;i<nge.size()-1;i++){
        cout<<nge[i]<<endl;
    }
}

