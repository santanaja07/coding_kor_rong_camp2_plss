#include <bits/stdc++.h>
using namespace std;

int main() {
	string name,surname;
	cin>>name>>surname;
	int sex;
	cin>>sex;
	int age;
	int marry;
	cin>>age>>marry;
	if(sex==0){
		if(marry==0){
			cout<<"Miss ";
		}else{
			cout<<"Mrs. ";
		}
	}else{
		if(age>15){
			cout<<"Mr. ";
		}else if(age<15){
			cout<<"Master ";
		}
	}
	cout<<name<<" "<<surname;
}
