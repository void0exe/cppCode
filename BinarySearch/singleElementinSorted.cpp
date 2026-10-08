#include <bits/stdc++.h>
using namespace std;
//Brute force
int SE(vector<int> arr){
    int i=0;
    int cont=0;

    for(int j=0;j<arr.size();j++){
        if(arr[j]==arr[i]){
            cont++;
        }else if(cont==2){
            i=i+2;
            cont=0;
        }else if(arr[j]!=arr[i]){
            return arr[i];
        }
    }
}
int main(){
    vector<int> arr = {1,1,2,2,3,4,4};
    cout<<SE(arr);
}

//Optimal
// int SE(vector<int> arr,int high,int low){
    
//     high=arr.size()-2;
//     low=1;
    
//     while(high>=low){
//         int mid=low+(high-low)/2;  //h+l == l + (h-l)  if l,h=m

//         if(arr.size()==1){
//             return -1;
//         }
//         if(arr[0]!=arr[1]){
//             return arr[0];
//         }
//         if(arr[arr.size()-1]!=arr[arr.size()-1]){
//             return arr[arr.size()];
//         }

//         if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
//             return arr[mid];
//         }else if(mid%2==1 && arr[mid]==arr[mid-1] || mid%2==0 && arr[mid]==arr[mid+1]){
//             low=mid+1;
//         }else{
//             high=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int> arr = {1,1,2,2,3,4,4};
//     int high=arr.size()-1;
//     int low=0;
//     cout<<SE(arr,high,low);
// }