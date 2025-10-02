#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n;
    int c[n];
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++){
        cin>>c[i];
        if((i+1)%2==0){
            sum2+=c[i];
        }else{
            sum1+=c[i];
        }
    }
    if(sum1>sum2){
        cout<<sum1;
    }else{
        cout<<sum2;
    }

}