#include <bits/stdc++.h>
using namespace std;

int n, k, a[1005];
bool ok;

void in(){
	for(int i=0; i<k;i++){
		cout<<char(a[i]+'A'-1);
	}
	cout<<endl;
}

void sinh(){
	int i=k-1;
	while(i>=0 && a[i]==n-k+i+1) i--;
	if(i<0) ok=false;
	else{
		a[i]++;
		for(int j=i+1; j<k;j++) a[j]=a[j-1]+1;
	}
	
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0; i<k;i++) a[i]=i+1;
		ok=true;
		while(ok){
			in();
			sinh();
	}
	}
	
	return 0;
}
