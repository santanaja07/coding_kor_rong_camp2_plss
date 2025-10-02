#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin>>n;
    string y=n.substr(0,4);
    int year=stoi(y);
    string m=(n.substr(5,2));
    int moo=stoi(m);
    string day=n.substr(8,2);
    int doo=stoi(day);
    if(n.length()!=10){
        cout<<"Invalid date.";
        return 0;
    }
    if(moo>12){
        cout<<"Invalid month.";
        return 0;
    }
    int mount[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(year%4==0){
        mount[2]++;
    }
    if(doo>mount[moo]){
        cout<<"Invalid Day.";
        return 0;
    }
    cout<<day<<"/"<<m<<"/"<<y;
}