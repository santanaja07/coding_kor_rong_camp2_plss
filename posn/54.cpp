#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int c[n][k]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>c[i][j];
        }
    }
    int q;
    cin>>q;
    int y1[q],x1[q],y2[q],x2[q];
    for(int i=0;i<q;i++){
        cin>>y1[i]>>x1[i]>>y2[i]>>x2[i];
    }
    int sum1=0;
    for(int i=0;i<q;i++){
        sum1=0;
        for(int j=y1[i]-1;j<=y2[i]-1;j++){
            for(int l=x1[i]-1;l<=x2[i]-1;l++){
                sum1+=c[j][l];
            }
        }
        cout<<sum1<<"\n";
    }


}