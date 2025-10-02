#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int even=0;
    int odd=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"e: "<<even<<",o: "<<odd;
}
