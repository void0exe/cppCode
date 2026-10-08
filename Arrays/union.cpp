#include <bits/stdc++.h>
using namespace std;
//union(Set)
// void Union(int arr1[],int arr2[],int n1,int n2){
//     set<int> st;
//     for(int i=0;i<n1;i++){
//         st.insert(arr1[i]);
//     }

//     for(int i=0;i<n2;i++){
//         st.insert(arr2[i]);
//     }

//     for(auto it : st){
//         cout<<it;
//     }
// }

//Map
// void Union(int arr1[],int arr2[],int n1,int n2){
//     map<int,int> mpp;
    

//     for(int i=0;i<n1;i++){
//         mpp[arr1[i]]++;
//     }

//     for(int i=0;i<n2;i++){
//         mpp[arr2[i]]++;
//     }

//     for(auto it : mpp){
//         cout<<it.second;
//     }

// }

// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     int arr1[n1] ={1,2,3};
//     int arr2[n2] = {2,3,5};

//     Union(arr1,arr2,n1,n2);
// }


//Optimal 
void Union(int arr1[],int arr2[],int n1,int n2){
    int i=0;
    int j=0;

    vector<int> Union;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            if(Union.empty()||Union.back()!=arr1[i]){
                Union.push_back(arr1[i]);
                i++;
            }
            
        }
        else if(arr2[j]<arr1[i]){
            if(Union.empty()||Union.back()!=arr2[j]){
                Union.push_back(arr2[j]);
                j++;
            }
        }
        else{
            if((Union.empty()||Union.back()!=arr1[i])){
                Union.push_back(arr1[i]);
                i++;
                j++;
            }
        }
    }

    while (i < n1) {
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }

        // Append remaining elements from arr2
        while (j < n1) {
            if (Union.empty() || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }

    for(auto it:Union){
        cout<<it;
    }

}

int main(){
    int n1=3,n2=3;
    
    int arr1[n1] ={1,2,3};
    int arr2[n2] = {2,3,5};

    Union(arr1,arr2,n1,n2);
}



// //Intersection brute
// void Union(int arr1[],int arr2[],int n1,int n2){
//     int n3=n1+n2;
//     vector<int> temp;
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             if(arr1[i]==arr2[j]){
//                 temp.push_back(arr1[i]);
//             }
//         }
//     }

//     for(int k=0;k<temp.size();k++){
//         cout<<temp[k];
//     }
// }

// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     int arr1[n1] ={1,2,3};
//     int arr2[n2] = {2,3,4,5};

//     Union(arr1,arr2,n1,n2);
// }