#include <bits/stdc++.h>
using namespace std;
//brute 
// bool palindrom(string s){
//     int left=0;
//     int right=s.size()-1;

//     while(left<right){
//         if(!isalnum(s[left])){
//             left++;
//         }else if(!isalnum(s[right])){
//             right--;
//         }else if(tolower(s[left])!=tolower(s[right])){
//             return false;
//         }else{
//             left++;
//             right--;
//         }
//     }
//     return true;
// }
// int main(){
//     string s="nadam";
//     cout<<palindrom(s);
// }

//recursion optimal
// bool palindrom(string s,int left,int right){
//         if(left>=right){
//             return true;
//         }else if(!isalnum(s[right])){
//             right--;
//         }else if(tolower(s[left])!=tolower(s[right])){
//             return false;
//         }else{
//             left++;
//             right--;
//         }

    
//     return palindrom(s,left,right);
// }
// int main(){
//     string s=" ";
//     int left=0;
//     int right=s.size()-1;
//     cout<<palindrom(s,left,right);
// }


// recursion 2nd form

// bool isPalindrom(string s,int i){
//     if(i>s.size()/2){
//         return true;
//     }

//     if(s[i]!=s[s.size()-i-1]){
//         return false;
//     }
//     return isPalindrom(s,i+1);
// }

// bool isPalindrom(string s) {
//     int left =0;
//     int right = s.size()-1;

//     while(left<right){
//         if(!isalnum(s[left])){
//             left++;
//         }else if(!isalnum(s[right])){
//             right--;
//         }else if(tolower(s[left])!=tolower(s[right])){
//             return false;
//         }else{
//             right--;
//             left++;
//         }
//     }

//     return true;
    
// }

bool isPalindrom(string s){
    int left = 0;
    int right = s.size()-1;

    if(left>right){
        return true;
    }
    
    

    isPalindrom(s);

    if(!isalnum(s[left])){
        left++;
    }else if(!isalnum(s[right])){
        right--;
    }else if(tolower(s[left])!=tolower(s[right])){
        return false;
    }else{
        right--;
        left++;
    }

}
int main(){
    string s="A man, a plan, a canal: Panama";
    cout<<isPalindrom(s);
}