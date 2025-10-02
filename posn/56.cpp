#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c[n][n];
    int sum=0;
    int de;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>c[i][j];
        }
    }
    cin>>de;
    if(de==90){
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
                cout<<c[j][i]<<" ";
            }
            cout<<endl;
        }
    }
    if(de==180){
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    if(de==270){
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n;j++){
                cout<<c[j][i]<<" ";
            }
            cout<<endl;
        }
    }
    
}