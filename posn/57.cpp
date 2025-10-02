#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int c[n][k];
    int sum=0;
    int de;
    int count=0;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<k;j++){
            cin>>c[i][j];
            if(c[i][j]==1){
                count++;
            }
        }
        cout<<count<<endl;
    }

    
}