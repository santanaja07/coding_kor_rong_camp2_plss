#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin>>n;
    int k=0;
    for(int i=0;i<n.length();i++){
        if(n[i]=='+'||n[i]=='-'||n[i]=='*'||n[i]=='/'){
            k=i;
            break;
        }
    }
    if(k==0){
        cout<<"0.00";
        return 0;
    }
    string nf=n.substr(0,k);
    double fi=stod(nf);
    string nl=n.substr(k+1,n.length()-1-k);
    double la=stod(nl);
    double ans;
    //cout<<nf<<" "<<nl<<endl;
    //cout<<k<<endl;
    //cout<<fi<<" "<<la<<" ";
    if(n[k]=='+'){
        ans=la+fi;
    }else if(n[k]=='*'){
        ans=fi*la;
    }else if(n[k]=='-'){
        ans=fi-la;
    }else{
        ans=fi;
        ans=ans/la;
    }
    cout<<fixed<<setprecision(2)<<ans;

}