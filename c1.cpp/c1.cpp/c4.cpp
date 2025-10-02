#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>c[i];
        sum+=c[i];
    }
    cout<<sum;
}