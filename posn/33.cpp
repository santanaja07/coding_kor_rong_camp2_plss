#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int c[n][m]={0};
    int sum=0;
    int max[n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>c[i][j];
            
        }
    }
    for(int i=0;i<n;i++){
        sort(c[i],c[i]+m);
    }
    for(int i=0;i<n;i++){
        cout<<c[i][m-1]<<" ";
    }
}

