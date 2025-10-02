#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    getline(cin,n);
    int countupper=0;
    int countint=0;
    for(int i=0;i<n.length();i++){
        if(n[i]>='A'&&n[i]<='Z'){
            countupper++;
        }else if(n[i]<='9'&&n[i]>='0'){
            countint++;
        }
    }
    cout<<countupper<<endl<<countint;
}