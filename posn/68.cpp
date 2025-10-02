#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int box[101]={0};
    int c[n];
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>c[i];
        box[c[i]]++;
    }
    /*int mx=box[0];
    for(int i=0;i<101;i++){
        if(box[i]>mx){
            mx=box[i];
        }
    }*/
    for(int i=0;i<101;i++){
        if(box[i]>=k){
            cout<<i<<": ";
            for(int j=0;j<box[i];j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
   /*for(int i=0;i<101;i++){
        if(box[i]>)
   }*/

}