#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int two=0;
    int nottwo=0;

    int a[n]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            two++;
        }else{
            nottwo++;
        }
    }
    bool pos=false;
    cout<<two<<"\n"<<nottwo<<"\n"<<a[0]<<"\n"<<a[n-1];
    int keep[n]={0};
    for(int i=0;i<n;i++){
        keep[i]=a[i];
    }
    cout<<endl;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(keep[i]>0){
            cout<<keep[i]<<" ";
            pos=true;
        }
    }
    if(!pos){
        cout<<"NO POSITIVE";
    }

}