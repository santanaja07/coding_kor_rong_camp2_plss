#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    getline(cin,n);
    int countupper=0;
    int countint=0;
    for(int i=0;i<n.length();i++){
        if(isupper(n[i])){
            countupper++;
        }else if(isdigit(n[i])){
            countint++;
        }
    }
    cout<<countupper<<endl<<countint;
}