#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int sum=0;
    int count=0;
    while(true){
        cin>>n;
        if(n==-1){
            break;
        }
        count++;
        sum+=n;

    }
    cout<<sum/count;
}
