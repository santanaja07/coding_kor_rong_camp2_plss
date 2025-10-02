#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int c[n];
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	sort(c,c+n);
	cout<<"sort: ";
	for(int i=0;i<n;i++){
		cout<<c[i]<<" ";
	}
	cout<<endl;
	double mid=0;
	if(n%2==0){
		mid=c[n/2]+c[n/2-1];
		mid=mid/2;
		
		cout<<"median: "<<fixed<<setprecision(1)<<mid;
	}else{
		mid=c[n/2];
		cout<<"median: "<<fixed<<setprecision(1)<<mid;
	}
	
	
}
