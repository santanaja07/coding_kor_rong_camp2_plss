#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    getline(cin,n);
    string mama="";
    for(int i=0;i<n.length();i++){
        if(n[i]==' '){

        }else{
            mama+=tolower(n[i]);
        }

    }
    bool free=true;
    for(int i=0;i<mama.length();i++){
        if(mama[i]==mama[mama.length()-1-i]){

        }else{
            free=false;
        }
    }
    if(!free){
        cout<<"NO";
    }else{
        cout<<"YES";
    }

}