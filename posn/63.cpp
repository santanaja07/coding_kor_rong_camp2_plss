#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>c[i][j];
        }
    }
    int sumpete=0;
    int sumpenut=0;
    int sumchertam=0;
    for(int j=0;j<n;j++){
        sumpenut+=c[j][0];
        sumpete+=c[j][1];
        sumchertam+=c[j][2];
    }
    cout<<"Peanut: "<<sumpenut<<endl;
    cout<<"Pete: "<<sumpete<<endl;
    cout<<"Chertam: "<<sumchertam<<endl;
    int x[3];
    x[0]=sumpenut;
    x[1]=sumpete;
    x[2]=sumchertam;
    sort(x,x+3);
    cout<<"Winner: ";
    if(x[2]==sumpete&&x[2]==sumpenut&&x[2]==sumchertam){
        cout<<"Peanut & Pete & Chertam";
    }else if(x[2]==sumpete&&x[2]==sumpenut){
        cout<<"Peanut & Pete";
    }else if(x[2]==sumchertam&&x[2]==sumpenut){
        cout<<"Peanut & Chertam";
    }else if(x[2]==sumchertam&&x[2]==sumpete){
        cout<<"Pete & Chertam";
    }else if(x[2]==sumpenut){
        cout<<"Peanut";
    }else if(x[2]==sumpete){
        cout<<"Pete";
    }else if(x[2]==sumchertam){
        cout<<"Chertam";
    }
    
    cout<<" Score: "<<x[2];
}