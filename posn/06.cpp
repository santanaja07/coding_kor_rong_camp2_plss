#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>=80&&n<=100){
        cout<<"A";
    }else if(n>=70&&n<=79){
        cout<<"B";
    }else if(n>=60&&n<=69){
        cout<<"C";
    }else if(n>=50&&n<=59){
        cout<<"D";
    }else if(n<50){
        cout<<"F";
    }
}