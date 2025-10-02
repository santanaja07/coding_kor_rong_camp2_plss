#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int c[n][m];
    int tuse,bath;
    cin>>tuse>>bath;
    int people;
    cin>>people;
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>c[i][j];
            sum+=c[i][j];
        }
    }
    sum+=bath*tuse*people;
    if(sum%people==0){
        cout<<sum/people;

    }else{
        cout<<sum/people+1;
    }


}