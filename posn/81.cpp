#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    getline(cin,n);
    string k;
    cin>>k;
    char copy[k.length()];
    for(int i=0;i<k.length();i++){
        copy[i]=k[i];
    }
    string tann;
    cin>>tann;
    string nw="";
    int s;
    do{
        string s="";
        for(int i=0;i<k.length();i++){
            s+=copy[i];
        }
        for(int i=0;i<n.length();i++){
            nw="";
            for(int j=i;j<i+k.length();j++){
                nw+=n[j];
            }
            cout<<nw<<" ";
            cout<<copy<<endl;
            if(nw==copy){
                n.replace(i,nw.length(),tann);
            }
        }
    }while(next_permutation(copy,copy+k.length()));
    cout<<n;


}