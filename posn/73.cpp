#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin>>n;
    int sum=0;
    int multi=1;
    int count=0;
    int box[11]={0};
    bool find=false;
    for(int i=0;i<n.length();i++){
        if(isdigit(n[i])){
            int s=int(n[i]-'0');
            sum+=s;
            multi*=s;
            box[s]++;
            find=true;
        }
    }
    if(find){
        cout<<"Sum of digits: "<<sum<<endl;
	    cout<<"Product of digits: "<<multi<<endl;
        for(int i=0;i<11;i++){
            if(box[i]>0){
             count++;
            }
        }
        cout<<"Number of unique digits: "<<count<<endl;
        cout<<"Frequency of each digit:"<<endl;
        for(int i=0;i<n.length();i++){
            if(isdigit(n[i])){
                cout<<"Digit "<<n[i]<<": "<<box[n[i]-'0']<<" times"<<endl;
            }
        }
    }else{
        cout<<"No digits found in the input.";
    }
    
}