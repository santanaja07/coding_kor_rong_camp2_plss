#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    int box[a]={0};
    bool prime=true;
    int sum=0;
    for(int j=2;j<=a;j++){
        prime=true;
        for(int i=2;i<=sqrt(j);i++){
            if(j%i==0){
                prime=false;
            }
        }
        if(prime){
            sum+=j;
        }
    }
    cout<<sum;
    
    
}