#include <bits/stdc++.h>
using namespace std;

int n, k, a[20],b[20], dem=0;
bool ok;

void in(){
	for(int i=0; i<n;i++){
		if(b[i]==1) cout<<a[i]<<" ";
	}
	cout<<endl;
}

void sinh(){
	int i=n-1;
	while(i>=0 && b[i]==1){
		b[i]=0;
		i--;
	}
	if(i<0) ok=false; 
	else b[i]=1;
}

bool check(){
	int sum=0;
	for(int i=0; i<n;i++){
		sum+= (a[i]*b[i]);
	}
	if(sum==k) return true;
	else return false;
}

int main(){
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	ok=true;
	while(ok){
		if(check()){
			in();
			dem++;
		}
		sinh();
	}
	cout<<dem<<endl;
}

