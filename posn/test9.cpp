#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    double ans;
    ans=3.14*n*n*n*4;
    ans/=3;
    cout<<fixed<<setprecision(2)<<ans;
}