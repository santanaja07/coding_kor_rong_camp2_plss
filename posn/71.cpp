#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin>>n;
    int c;
    c=n.find("@");
    /*for(int i=0;i<c;i++){
        cout<<n[i];
    }
    cout<<endl;
    for(int i=c+1;i<n.length();i++){
        cout<<n[i];
    }*/
   if(c==-1){
         cout<<"Invalid email format.";
   }else{
        cout<<n.substr(0,c)<<endl<<n.substr(c+1,n.length()-1-c);
   }

}