#include <bits/stdc++.h>
using namespace std;

int n, a[1005];
bool ok;

void in(){
	for(int i=0; i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void sinh(){
	int i=n-1;
	while(i>=0 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i<0) ok=false; 
	else a[i]=1;
}

bool check(){
	int l=0, r=n-1;
	while(l<r){
		if(a[l]!=a[r]) return false;
		l++; r--;
	}
	return true;
}

int main(){
	cin>>n;
	ok=true;
	while(ok){
		if(check()){
			in();
		}
		sinh();
	}
}

