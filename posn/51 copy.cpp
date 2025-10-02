#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int c[n][k]={0};
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>c[i][j];
            if(c[i][j]==1){
                count++;
            }
        }
    }
    cout<<count;

}