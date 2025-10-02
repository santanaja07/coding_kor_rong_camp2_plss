#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int box[a]={0};
    for(int i=2;i<=a;i++){
        if(a%i==0 && b%i==0){
            box[i]=i;
        }
    }
    sort(box,box+a);
    cout<<box[a-1];
}
