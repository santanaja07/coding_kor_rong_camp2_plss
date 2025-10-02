#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    getline(cin,n);
    stringstream c(n);
    double s;
    double sum=0;
    int count=0;
    while (c>>s){
        sum+=s;
        count++;

    }
    double avg;
    avg=sum;
    avg=avg/count;
    if(count==0){
        avg=0;
    }
    cout<<fixed<<setprecision(1)<<sum<<endl<<count<<endl<<fixed<<setprecision(1)<<avg;
}