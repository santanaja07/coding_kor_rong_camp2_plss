#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int c[n];
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    sort(c,c+n);
    int sum=0;
    int s;
    int count=0;
    for(int j=n-1;j>=0;j--){
        if(count==k){
            break;
        }
        sum+=c[j];
        s=j;
        count++;
    }
    s=s-1;
    while(c[s]>0&&s>=0&&s<n){
        sum+=c[s];
        s--;
    }
    cout<<sum;

}