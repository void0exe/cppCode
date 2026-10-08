#include <bits/stdc++.h>
using namespace std;


//1st implementation and there more
class minStack { //class ot type
    
    stack<pair<int,int>> st;
    public:
    void push(int n){
        if(st.empty()){
            st.push({n,n});
        }else{
            if(n<st.top().second){
                st.push({n,n});
            }else{
                st.push({n,st.top().second});
            }
        }
    }

    void pop(){
        st.pop();
    }

    void top(){
        cout<<st.top().first;
    }
    int getMin(){
        return st.top().second;
    }

};

int main(){
    minStack stacp; //minStack data type and stacp is a variable;
    stacp.push(12);
    stacp.push(15);
    stacp.push(10);
    stacp.pop();
    // st.top();
    cout<<stacp.getMin();
}


// ********************************************************************************************************************************************
//ChatGpt implementataion for referenece
//More cleaner implementation chat gpt 
#include <bits/stdc++.h>
using namespace std;

class MinStack {
    stack<pair<int, int>> st;

public:

    void push(int val) {
        if (st.empty()) {
            st.push({val, val});
        }
        else {
            int mini = min(val, st.top().second); //compact use
            st.push({val, mini});
        }
    }

    void pop() {
        if (!st.empty()) {
            st.pop();
        }
    }

    int top() {
        return st.top().first; // its better to return raher than cout
    }

    int getMin() {
        return st.top().second;
    }
};

int main() {
    MinStack st;

    st.push(5);
    st.push(3);
    st.push(7);
    st.push(2);

    cout << st.getMin() << endl;  // 2

    st.pop();

    cout << st.getMin() << endl;  // 3

    cout << st.top() << endl;     // 7

    return 0;
}

// ********************************************************************************************************************************************