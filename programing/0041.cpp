#include <bits/stdc++.h>
using namespace std; 

int main() {
	int n;
	
	cin>>n;
	double a=sqrt(3);
	double k;
	if(n%2==0){
		k=n;
	}else if(n==1){
		k=1;
	}else if(n%2==1){
		k=n+0.464102;
	}
	cout<<fixed<<setprecision(6)<<k;
	
	
}
