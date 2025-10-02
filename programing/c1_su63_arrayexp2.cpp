#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int c[n][m]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>c[i][j];
		}
	}
	int p;
	cin>>p;
	int y[p]={0},x[p]={0};
	for(int i=0;i<p;i++){
		cin>>y[p]>>x[p];
	}
	int s=0;
	int plus=0,two=0,nottwo=0,minus=0;
	for(int i=0;i<p;i++){
		cout<<c[y[p]-1][x[p]-1]<<" ";
		if(y[p]>m||x[p]>n||y[p]<1||x[p]<1){
			s=0;
			for(int j=p-1;j>=0;j--){
				if(y[j]>m||x[j]>n||y[j]<1||x[j]<1){
					continue;
				}
				s=j;
				break;
			}	
			if(c[y[s]-1][x[s]-1]>0){
				plus++;
			}else if(c[y[s]-1][x[s]-1]<0){
				minus++;
			}
			if(c[y[s]-1][x[s]-1]%2==0){
				two++;
			}else{
				nottwo++;
			}
			continue;
		}
		if(c[y[p]-1][x[p]-1]>0){
			plus++;
		}else if(c[y[p]-1][x[p]-1]<0){
			minus++;
		}
		if(c[y[p]-1][x[p]-1]%2==0){
			two++;
		}else{
			nottwo++;
		}
		
	}
	//cout<<plus<<" "<<minus<<" "<<two<<" "<<nottwo;
	
}

