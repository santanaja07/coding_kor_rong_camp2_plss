#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int c[n];
	int sum=0;
	double avg=0;
	for(int i=0;i<n;i++){
		cin>>c[i];
		sum+=c[i];
	}
	avg=sum;
	avg=avg/n;
	sort(c,c+n);
	cout<<"sorting: ";
	for(int i=0;i<n;i++){
		cout<<c[i]<<" ";
	}
	cout<<endl;
	cout<<"avg: "<<fixed<<setprecision(2)<<avg;
	
	
}
