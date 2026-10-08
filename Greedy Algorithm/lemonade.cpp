#include<bits/stdc++.h>
using namespace std;

bool lemon(vector<int> arr){
    int cnt5=0;
    int cnt10=0;
    int cnt20=0;
    for(int i=0;i<arr.size();i++){
        
        if(arr[i]==5){
            cnt5++; //3
        }else if(arr[i]==10){
            
            if(cnt5!=0){
                cnt5--; //2
                cnt10++; //1
            }else{
                return false;
            }
            
        }else if(arr[i]==20){
            
            if(cnt5!=0 && cnt5>=3){
                cnt5-=3; //1
                cnt20++; //1
            }else if(cnt5!=0 && cnt10!=0){
                cnt10--;
                cnt5--;
                cnt20++;
            }else{
                return false;
            }
        }
    }
    return true;
}

int main(){
    vector<int> arr = {5,5,5,10,20}; 
    cout<<lemon(arr);
}





// *******************************************************************************************************************************************/
//correct submition leet code
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cnt5=0;
        int cnt10=0;
        int cnt20=0;
        for(int i=0;i<bills.size();i++){
        
        if(bills[i]==5){
            cnt5++; //3
        }else if(bills[i]==10){
            if(cnt5>=1){
                cnt5--; //2
                cnt10++; //1
            }else{
                return false;
            } 
        }else if(bills[i]==20){
            if(cnt5>=1 && cnt10>=1){
                cnt10--;
                cnt5--;
                cnt20++;
            }else if(cnt5>=3){
                cnt5-=3; //1
                cnt20++; //1
            }else{
                return false;
            }
        }
    }
    return true;
    }
};