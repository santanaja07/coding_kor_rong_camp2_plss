#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin>>n;
    n.insert(6,"-");
    if(n[0]!='0'||n.length()!=11){
        cout<<"Invalid Format";
    }else{
        cout<<"+66 "<<"("<<n.substr(1,2)<<") "<<n.substr(3,8);
    }




}