#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin>>n;
    int box[300]={0};
    for(int i=0;i<n.length();i++){
        box[n[i]]++;
    }
    int count=1;
    for(int i=0;i<n.length();i++){
        if(i+1==n.length()){
            cout<<count<<n[i];
            break;
        }
        if(n[i]==n[i+1]){
            count++;
        }else{
            cout<<count<<n[i];
            count=1;
        }
    }


}