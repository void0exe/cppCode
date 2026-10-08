// #include <bits/stdc++.h>
// using namespace std;


// string reverseWords(string s) {
//         vector<int> words;
//         string s1 = "";

//         for(int i=0;i<s.size();i++){
//             if(s[i]!=' '){
//                 s1+=s[i];
//             }else if(!s1.empty() || s[i]==' '){
//                 words.push_back(s1);
//                 s1 = "";
//             }
//         }
//         if (!s1.empty()) {
//             words.push_back(s1);
//         }

//         reverse(words.begin(),words.end());

//         string result = "";
//         for (int i = 0; i < words.size(); i++) {
//             result += words[i];
//             // Add a space if it's not the last word
//             if (i < words.size() - 1) {
//                 result += " ";
//             }
//         }
// }


// int main(){
//     string word = "Hello This is Aman ";
//     cout<<reverseWords(word);    
// }
