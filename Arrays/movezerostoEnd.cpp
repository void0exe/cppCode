#include <bits/stdc++.h>
using namespace std;

//BRUTE

// int main(){
//     int n;
//     cin>>n;
    
//     int arr[n]={0,0,0,1,3,-2};
//     vector<int> temp;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             temp.push_back(arr[i]);
//         }
//     }

//     for(int i=0;i<temp.size();i++){
//         arr[i]=temp[i];
//     }

//     for(int i=temp.size();i<n;i++){
//         arr[i]=0;
//     }
    
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }

// void lastZeros(int arr[],int n){
//     int temp[6]={}; //or {0}
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             temp[count]=arr[i];
//             count++;
//         }
//     }

//     for(int i=0;i<n;i++){
//         arr[i]=temp[i];
//         cout<<arr[i];
//     }

//     // return arr[];//This is where vector is use full
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n]={1,0,2,0,3,0};
//     lastZeros(arr,n);
// }

//Optimal
int zeroesLast(int arr[],int n){
    int i=-1;


    for(int j=0;j<n;j++){
        if(arr[j]==0){
            i=j;
            break;
        }
        
    }
    if(i==-1){
        return -1;
    }
    

    for(int j=i+1;j<n;j++){
        
        if(arr[i]!=0){
            i++;
        }
        else if(arr[i]==0&&arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
    }

    for(int k=0;k<n;k++){
        cout<<arr[k];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n] = {1,3,1,4,5,2};
    cout<<zeroesLast(arr,n);

}