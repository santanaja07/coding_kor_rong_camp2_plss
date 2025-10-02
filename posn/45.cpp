#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    int c[a];
    int sum=0;
    int count=0;
    int copy[a];
    for(int i=0;i<a;i++){
       cin>>c[i];
       copy[i]=c[i];
        //if(c[i]%2==0){
            //count++;
        //}
        
    }
    sort(c,c+a);
    sum=sum/a;
    for(int i=0;i<a;i++){
        if(copy[i]==c[a-1]){
            cout<<i;
            break;
        }
        
    }
   // cout<<count;
}