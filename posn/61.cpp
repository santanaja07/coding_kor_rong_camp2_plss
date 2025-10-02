#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int c[n];
    char q[n];
    for(int i=0;i<n;i++){
        cin>>q[i]>>c[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(q[i]=='C'){
            if(c[i]==1){
                sum+=5;
            }else{
                sum-=2;
            }
        }else if(q[i]=='D'){
            if(c[i]==1){
                sum+=10;
            }else{
                sum-=0;
            }
        }else if(q[i]=='B'){
            if(c[i]==1){
                if(sum>=20){
                    sum+=15;
                }
            }else{
                sum+=0;
            }
        }
    }
    cout<<sum;
}