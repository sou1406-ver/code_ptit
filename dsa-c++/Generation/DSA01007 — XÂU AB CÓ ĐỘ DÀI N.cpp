#include <bits/stdc++.h>
using namespace std;

int n;
int a[1005]; 
bool ok;

void in(){
	for(int i=1; i<=n ;i++){
		if(a[i]==0) cout<<"A";
		else cout<<"B";
	}
	cout<<" ";
}

void sinh(){
	int i=n;
	while(i>=1 && a[i]==1) {
		a[i]=0;	
		--i;
	}
	if(i==0) ok=false;
	a[i]=1;
	
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		ok=true;
		for(int i=1; i<=n;i++){
			a[i]=0;
		}
		while(ok){
			in();
			sinh();
		}
		cout<<endl;
	}
}

