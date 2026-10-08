#include <bits/stdc++.h>
using namespace std;



// int main(){
//     int n;
//     cout<<"Enter Element";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }


//     //precomputation
//     int hash[13];L
//     for(int i=0;i<n;i++){
//         hash[arr[i]]+=1;
//     }
    
//     //fetching
//     int q;
//     cin>>q;
//     while(q--){//q>0
//         int num;
//         cin>>num;
//         cout<<hash[num];
//     }
    
// }

//do this for charactor individualy and then 
// int main(){
//     string str;
//     cout<<"Enter String";
//     cin>>str;

//     // int hash[26]={0};
//     // for(int i=0;i<str.size();i++){
//     //     hash[str[i]-'A']+=1;
//     // }
//     int hash[256]={0};
//     for(int i=0;i<str.size();i++){
//         hash[str[i]]++;
//     }

//     int q;
//     cout<<"Search Element";
//     cin>>q;
//     while(q--){
//         char ch;
//         cout<<"Enter Character";
//         cin>>ch;
//         cout<<hash[ch];
//     }
// }


//do this with map STL
// int main(){
//     int n ;
//     cout<<"Enter arr Size";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     map<int,int> m ;
//     for(int i=0;i<n;i++){
//         m[arr[i]]++;
//     }



//     int q;
//     cout<<"Search Element";
//     cin>>q;
//     while(q--){
//         int num;
//         cout<<"Enter Num";
//         cin>>num;
//         cout<<m[num];
//     }
// }
//find the highest and lowest frequency element
int main(){
    int n ;
    cout<<"Enter arr Size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    map<int,int> m ;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }



    int q;
    cout<<"Search Element";
    cin>>q;
    while(q--){
        int num;
        cout<<"Enter Num";
        cin>>num;
        cout<<m[num];
        
    }
    
}