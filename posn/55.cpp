#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    int y,x;
    cin>>n>>k>>y>>x;
    int c[n][k]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>c[i][j];
        }
    }
    int sum=0;
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum=0;
            for(int p=0;p<y;p++){
                for(int u=0;u<x;u++){
                    if(i+p>=n || j+u>=k){
                        continue;
                    }
                    sum+=c[i+p][j+u];
                }

            }
            if(sum>mx||(i==0&&j==0)){
                mx=sum;
            }
        }

    }
    cout<<mx;

}