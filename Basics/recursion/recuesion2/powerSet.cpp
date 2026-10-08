#include <bits/stdc++.h>
using namespace std;

void powerSet(int idx, int n, string s, vector<string> &temp, vector<int> &arr) {
    if (idx == n) {
        if(temp.size()==0){
            cout<<0<<endl;
        }
        temp.push_back(s);
        return;
    }

    // Take the current element
    s += to_string(arr[idx]);
    powerSet(idx + 1, n, s, temp, arr);

    // Don't take the current element
    s.pop_back();
    powerSet(idx + 1, n, s, temp, arr);
}

vector<string> ret(vector<int> arr) {
    int n = arr.size();
    string s = "";
    vector<string> temp;

    powerSet(0, n, s, temp, arr);

    return temp;
}

int main() {
    vector<int> arr = {1, 2, 3};

    vector<string> ans = ret(arr);

    for (string s : ans) {
        cout << s << endl;
    }
}