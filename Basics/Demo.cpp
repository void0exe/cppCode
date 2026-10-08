#include <bits/stdc++.h>
using namespace std;

//Switch Statements
// int main(){
//     int day;
//     std::cin >> day;

//     switch(day){
//         case 1:
//             cout << "Monday";
//             break;
//         case 2: 
//             cout << "Tuesday";
//             break;
//         case 3:
//             cout << "wednesday";
//             break;
//         default: cout << "invalid choice!";   
//     }
//     return 0;
// }


//Pass By Refrence 
//** 
// int Test(int &arr){
//     arr = 55;
//     // cout <<arr;
//     // return arr;
// }

// int main(){
//     int arr = 10;
//     Test(arr);
//     cout << arr;
//     return 0;
// }


//Arrays 


//**
// int Test(int arr[]){
//     // cout << arr[0];
//     arr[0] = 55;
    
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     Test(arr);
//     cout<<arr[0];
// }

//2D
// int main(){
//     int arr[3][2] = {{1,9},{2,2},{7,7}};
//     cout << arr[1][1];
    
//     return 0;
// }


//Strings
//** 
string Test(string &str){
    str[0] = 'z';
}
int main(){
    string str= "Aman Gupta";
    // cout << str;
    // str[0] = 'f';
    // cout << str;
    Test(str);
    cout<<str;
}

//getline

// int main(){
//     string str;
//     cout<<"Enter 1";
//     cin >> str;
    
//     cout<<"Enter 2";
//     cin >> str;

//     getline(cin,str);
//     cout << str;

//     return 0;
// }