#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int c[n]={0};
    int count=0;
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    int max=c[0];
    int idmax=0;
    for(int i=0;i<n;i++){
        if(c[i]>max){
            max=c[i];
            idmax=i;
        }
    }
    cout<<idmax;
}

