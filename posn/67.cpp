#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int c[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		c[i]=b[i];
	}
	sort(b,b+n);
	bool real=true;
	int temp;
	int count=0;
	while(real){
		for(int j=0;j<n;j++){
			for(int i=j;i<n-1;i++){
				
				if(c[i]>c[i+1]){
					temp=c[i];
					c[i]=c[i+1];
					c[i+1]=temp;
					count++;	
				}
			}
		}
		for(int i=0;i<n;i++){
			if(c[i]!=b[i]){
				real=true;
				break;
			}else{
				real=false;
			}
		}
	}
	cout<<count;
}
