#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int c[n+5]={0};
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    int count=1;
    int box[n]={0};
    for(int i=0;i<n;i++){
        if(c[i+1]>c[i]){
            count++;
        }else{
            box[i]=count;
            count=1;
        }
    }
    sort(box,box+n);
    cout<<box[n-1];
}