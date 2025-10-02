#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c[n];
    int count=0;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>c[i];
        if(c[i]<10||c[i]>100){
            count++;
        }else{
            sum+=c[i];
        }
    }

    cout<<count<<" "<<sum;

    
}