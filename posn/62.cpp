#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int c[n];
    int x[n];
    map<int,int> a;
    for(int i=0;i<n;i++){
        cin>>c[i]>>x[i];
        a[c[i]]=x[i];
    }
    for(int i=0;i<n;i++){
        if(a[c[i]]>x[i]){

        }else{
            a[c[i]]=x[i];
        }
    }
    int sum=0;
    bool real=true;
    for(int i=0;i<n;i++){
        real=true;
        for(int j=i+1;j<n;j++){
            if(c[i]==c[j]){
                real=false;
            }
        }
        if(real){
            sum+=a[c[i]];
        }
    }
    cout<<sum;
}