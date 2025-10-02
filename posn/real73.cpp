#include <bits/stdc++.h>
using namespace std;

int main() {
    string n,c;
    getline(cin,n);
    cin>>c;
    for(int i=0;i<n.length();i++){
        string nw="";
        for(int j=i;j<i+c.length();j++){
            nw=nw+n[j];
        }
        if(nw==c){
            for(int j=i;j<i+c.length();j++){
                n[j]='*';
            }
        }
    }
    cout<<n;
}