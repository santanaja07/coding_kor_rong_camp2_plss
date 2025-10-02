#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string c;
	for(int i=0;i<n;i++){
		cin>>c;
		int last;
		last=(c[c.length()-1])-'0';
		if(last%2==1 || (last==2&&c.length()==1)){
			cout<<"T\n";
		}else{
			cout<<"F\n";
		}
		
	}
	
}
