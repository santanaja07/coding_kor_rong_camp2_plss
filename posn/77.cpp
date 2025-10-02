#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    getline(cin,n);
    for(int i=0;i<n.length();i++){
        if(isupper(n[i])){
            if(n[i-1]==' '||i==0){
                cout<<n[i];
            }
        }
    }

}