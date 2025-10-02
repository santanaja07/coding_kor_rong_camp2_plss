#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int c[n];
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    int a[n/k];
    for(int i=1;i<=n/k;i++){
        a[i-1]=i*k;
    }
    int sum=0;
    int summx;
    for(int i=0;i<n/k;i++){
        for(int j=0;j<=n-a[i];j++){
            sum=0;
            for(int p=j;p<j+a[i];p++){
                sum+=c[p];
            }
            if(sum>summx || (i==0&&j==0)){
                summx=sum;
            }
        }
    }  
    cout<<summx;

}