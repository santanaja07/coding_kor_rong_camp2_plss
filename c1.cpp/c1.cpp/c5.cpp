#include <bits/stdc++.h>
using namespace std;

int main(){
    int price,money;
    cin>>price>>money;
    int ans;
    ans=money-price;
    int tho,fihun,hun,fiten,twoten,coin;
    tho=0;
    fihun=0;
    hun=0;
    fiten=0;
    twoten=0;
    coin=0;
    if(ans<0){
        cout<<"no money";
    }else if(ans==0){
        cout<<"no change";
    }else{
        tho=ans/1000;
        ans=ans-tho*1000;
        fihun=ans/500;
        ans=ans-fihun*500;
        hun=ans/100;
        ans=ans-hun*100;
        fiten=ans/50;
        ans=ans-fiten*50;
        twoten=ans/1000;
        ans=ans-twoten*20;
        coin=ans;
        cout<<"1000 ="<<" "<<tho<<"\n"<<"500 ="<<" "<<fihun<<"\n"<<"100 ="<<" "<<hun<<"\n"<<"50 ="<<" "<<fiten<<"\n"<<"20 ="<<" "<<twoten<<"\n"<<"coin ="<<" "<<coin;
    }
}