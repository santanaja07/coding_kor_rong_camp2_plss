#include <bits/stdc++.h>
using namespace std;

int main() {
    int s,v;
    cin>>s>>v;
    int t=s*60/v;
    int a;
    a=t/60;
    int b;
    b=t%60;
    cout<<a<<" "<<b;


}