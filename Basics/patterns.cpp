#include<bits/stdc++.h>
using namespace std;

//***********************/
void pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            cout<<"  ";
        }
        for(int j=0;j<2*n-((2*n-1)-2*i);j++){//odd-even=odd or (2i+1)
            cout<<"* ";
        }
        for(int j=0;j<n-1-i;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){ //j<i
            cout<<"  ";
        }
        for(int j=0;j<(2*n-1)-2*i;j++){//odd-even=odd //more logical way {2n-(2*i+1)}
            cout<<"* ";
        }
        for(int j=0;j<i+1;j++){ //j<i
            cout<<"  ";
        }
        cout<<endl;
    }
}

/*************/
void pattern6(int n){
    for(int i=1;i<=2*n;i++){
        int star=i;
        if(i>n){
            star=2*n-i;
        }
        for(int j=1;j<=star;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// *****************************
void pattern7(int n){
    int m=1;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            m=0;
        }else{
            m=1;
        }
        for(int j=1;j<=i;j++){
            cout<<m<<" ";
            m=1-m;
        }
        cout<<endl;
    }
}

//************************** */
void pattern8(int n){//one more way take spaces = 2*(n-1)
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }

        for(int j=1;j<=2*n-2*i;j++){
            cout<<"  ";
        }

        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        //spaces-=2;
        cout<<endl;
     }
}


void pattern9(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            sum+=1;
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}

void pattern10(int n){
    //improve this
    // char alpha = 'A';//65
    // for(int i=0;i<n;i++){
    //     char alpha = 'A';//65
    //     for(int j=0;j<i;j++){
    //         cout<<alpha;
    //         alpha+=1;
    //     }
    //     cout<<endl;
    // }

    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        for(char ch='A'+i;ch>='A';ch--){
            if(i==0){
                continue;
            }
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern12(int n){
    for(int i=0;i<n;i++){
        
        
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        
        char ch = 'A';
        int breakpoint=(2*i+1)/2;
        for(int j=0;j<2*i+1;j++){
            cout<<ch;
            if (j < breakpoint) ch++;
            else ch--;
        }

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        cout<<endl;
    }
}

void pattern17(int N) {
    // Loop for each row
    for (int i = 0; i < N; i++) {

        // Print leading spaces
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }

        // Initialize character to start from 'A'
        char ch = 'A';

        // Calculate midpoint of the row
        int breakpoint = (2 * i + 1) / 2;

        // Print the characters in the row
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;

            // Increment character till the midpoint, then decrement
            if (j < breakpoint) ch++;
            else ch--;
        }

        // Print trailing spaces
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }

        // Newline after each row
        cout << endl;
    }
}

void pattern13(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n = 5;

    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n); 
    // pattern6(n); //*
    // pattern7(n); //*
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    pattern12(n);
    pattern13(n);


    return 0;
}