#include <bits/stdc++.h>
using namespace std;

int n;
int a[1005];
bool ok1;

void in(){
	for(int i=1;i<=n;i++){
		if(a[i]==0) cout<<"A";
		else cout<<"H";
	}
	cout<<" ";
}

void sinh(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) ok1=false;
	else a[i]=1;
	
}

bool check(){
	int dem=0;
	if(a[1] !=1 || a[n] !=0 ) return false;
	for(int i=1;i<n;i++){
		if(a[i]==1 && a[i+1]==1){
			return false;
		}
	}
	return true;	
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=1; i<=n;i++){
			a[i]=0;
		}
		ok1=true;
		while(ok1){
			if(check()){
				in();
				cout<<endl;
			}
			sinh();
		}	
	}
}

