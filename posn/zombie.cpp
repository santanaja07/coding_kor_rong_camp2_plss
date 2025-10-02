#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int c[n];
	int box[n];
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	sort(c,c+n);
	int hand;
	hand=n/3;
	int sum=0;
	sum+=c[n-1];
	for(int i=0;i<n-hand-1;i++){
		sum+=c[i];
		
		
	}
	cout<<sum;
	
}
