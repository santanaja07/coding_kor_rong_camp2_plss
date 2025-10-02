#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int box[n+1]={0};
    box[0]=0;
    box[1]=1;
    for(int i=2;i<=n;i++){
        box[i]=box[i-1]+box[i-2];
    }
    cout<<box[n];
}
