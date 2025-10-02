#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int c1000,c500,c100,c50,c20;
    
    while(n>0){
        cout<<"1000 = "<<n/1000<<endl;
        n=n%1000;
        cout<<"500 = "<<n/500<<endl;
        n%=500;
        cout<<"100 = "<<n/100<<endl;
        n%=100;
        cout<<"50 = "<<n/50<<endl;
        n%=50;
        cout<<"20 = "<<n/20<<endl;
        n%=20;
        cout<<"coin = "<<n;
        n=0;

    }



}