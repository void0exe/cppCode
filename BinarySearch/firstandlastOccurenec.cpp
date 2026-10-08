#include <bits/stdc++.h>
using namespace std;

// //bad code writing
// void first(vector<int> arr,int high ,int low,int x){
//     int ans1 = arr.size()-1;
//     int ans2 = arr.size()-1;

//     while(high>=low){
//         int mid = (high +low)/2;
//         if(arr[mid]>=x){
//             ans1 = mid;
//             high = mid-1;
//         }else{
//             low = mid+1;
//         }
//     }
//     while(high>=low){
//         int mid = (high +low);
//         if(arr[mid]>x){
//             ans2 = mid;
//             high = low-1;
//         }else{
//             low = mid+1;
//         }
//     }
//     // cout<<ans1;
//     int ans3 =ans2-ans1;
//     cout<<ans1<<ans3;
    
// }
// int main(){
//     vector<int> arr = {1,2,3,3,3,3,3,4,5};
//     int high = arr.size()-1;
//     int low =0;
//     int x=3;

//     first(arr,high,low,x);
// }


//last occurence
// #include <bits/stdc++.h>
// using namespace std;

// // find last index of key using binary search
// int solve(int n, int key, vector<int>& v) {
//   // initialize search bounds and result
//   int start = 0;
//   int end = n - 1;
//   int res = -1;

//   // binary search loop
//   while (start <= end) {
//     // compute mid safely
//     int mid = start + (end - start) / 2;
//     // when match found, store index and move right
//     if (v[mid] == key) {
//       res = mid;
//       start = mid + 1;//imp
//     }
//     // when key is smaller, move left
//     else if (key < v[mid]) {
//       end = mid - 1;
//     }
//     // otherwise move right
//     else {
//       start = mid + 1;
//     }
//   }
//   // return last occurrence or -1
//   return res;
// }

// // program entry
// int main() {
//   // define input size and key
//   int n = 7;
//   int key = 13;
//   // define sorted array
//   vector<int> v = {3, 4, 13, 13, 13, 20, 40};
//   // print last occurrence index (or -1)
//   cout << solve(n, key, v) << "\n";
//   // exit
//   return 0;
// }




//total occurence

int main(){
    vector<int> arr = {1,2,2,2,3,4,5};
    int high = arr.size()-1;
    int low = 0;
    int x = 2;

    // occ(arr,high,low,x);
}