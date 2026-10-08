#include<bits/stdc++.h>
using namespace std;

// string postToinf(string s){
//     stack<string> st;
//     int i=0;
//     string concat;
//     string al;
//     while(i<s.size()){
        
//         if(isalnum(s[i])){
//             al={s[i]};//Changes below code chatgpt
//             st.push(al);
//         }else{
//             string t2 = st.top();
//             st.pop();
//             string t1 = st.top();
//             st.pop();

//             concat = "(" + t1 + s[i] + t2 + ")";
//             st.push(concat);
//         }
//         i++;
//     }
    
//     return st.top();
// }

// int main(){
//     string s = "AB-DE+F*/";
//     cout<<postToinf(s);
// }



// //Changes chat GPT COde
// #include <bits/stdc++.h>
// using namespace std;

// string postToInfix(string s) {
//     stack<string> st;

//     for (int i = 0; i < s.size(); i++) {

//         if (isalnum(s[i])) {
//             st.push(string(1, s[i])); //without using al this is how you can do it;
//         }
//         else {
//             string t2 = st.top();
//             st.pop();

//             string t1 = st.top();
//             st.pop();

//             string concat = "(" + t1 + s[i] + t2 + ")";

//             st.push(concat);
//         }
//     }

//     return st.top();
// }

// int main() {
//     string s = "AB-DE+F*/";

//     cout << postToInfix(s);

//     return 0;
// }



//for Prefix To infix just a lil chaage.
#include <bits/stdc++.h>
using namespace std;

string preToInfix(string s) {
    stack<string> st;

    for (int i = s.size()-1; i >= 0; i--) {

        if (isalnum(s[i])) {
            st.push(string(1, s[i])); //without using al this is how you can do it;
        }
        else {
            string t2 = st.top();
            st.pop();

            string t1 = st.top();
            st.pop();

            string concat = "(" + t2 + s[i] + t1 + ")";

            st.push(concat);
        }
    }

    return st.top();
}

int main() {
    string s = "*+PQ-MN";

    cout << preToInfix(s);

    return 0;
}