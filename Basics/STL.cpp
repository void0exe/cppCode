#include <bits/stdc++.h>
using namespace std;


// Pairs
// int main(){  
//     pair<int,int> p ; //datatype can be any
//     p={1,2};
//     cout<<p.second;;
//     pair<int,pair<int,int>> p2 = {3,{1,2}};
//     cout<<p2.second.second;
//     pair<int,int> arr[]={{1,2},{3,4}};
    

//     cout<<arr[1].first;
// }

//Vectors
// int main(){
// //     // vector<int> v = {1,2,3,4};
// //     // // v.push_back(1); 
// //     // // v.emplace_back(2);
// //     // cout<<v[1];
// //     // vector<pair<int,int>> vec;
// //     // vec.push_back({1,2});
// //     // cout<<vec[0].first;
// //     // vec.emplace_back(pair<int,int>{2,3}); //emplace back should also get the arguements
// //     // vector<pair<int,pair<int,int>>> vec2;
// //     // vec2.push_back({5,{1,2}});
// //     // vec2.emplace_back(pair<int,pair<int,int>>{5,{1,2}});
// //     // vector<int> v3(5,100);
// //     // v3[0]=22;
// //     // cout<<v3[0]
// //     // cout<<v3.at(3);
// //     // for(vector<int>::iterator it=v3.begin();it!=v3.end();it++){
// //     //     cout<<*it<<" ";
// //     // }
// //     // for(auto it=v3.begin();it!=v3.end();it++){
// //     //     cout<<*it<<" ";
// //     // }
    
// //     // v3.erase(v3.begin()+1,v3.begin()+4);
// //     // for(auto it : v3){
// //     //     cout<<it<<" ";
// //     // }

// //     //Insert
//     vector<int> v4(5,300);
//     // v4.insert(v4.begin(),50);
//     // v4.insert(v4.begin(),3,50);
//     vector<int> copy(2,50);
//     v4.insert(v4.begin(),copy.begin(),copy.end());
//     // v4.swap(copy);
//     for(auto it : v4){
//         cout<<it<<" ";
//     }

    
// }


//List
// int main(){
//     list<int> L = {1,2,3,4,5};
//     // L[0];//Cant access by indexes
//     L.push_back(2);
//     L.push_front(1);
//     // L.push_back(L.begin(44));//Not working
//     L.front()=99;//Changes the front value not add
//     for(auto it:L){
//         cout<<it<<" ";
//     }
// }


// //Deque
// int main(){
//     deque<int> dq;
//     dq.push_back(1);
//     dq.push_front(3);
//     dq.front()=12;
//     dq.pop_back();
//     dq.pop_front();
// }

// //Set
// int main(){
//     set<int> st;
//     st.emplace(1);
//     st.insert(2);
//     // st[1]; //Order based on sorting
//     st.insert(st.begin(),4);
// }


//Map
// void Union(int arr1[],int arr2[],int n1,int n2){
    
    
// }

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1] ={1,2,3};
    // int arr2[n2] = {2,3,4,5};

    // Union(arr1,arr2,n1,n2);

    map<int,int> mpp;

    for(int i=0;i<n1;i++){
        
    }   

    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
