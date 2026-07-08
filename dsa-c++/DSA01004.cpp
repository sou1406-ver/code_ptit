#include <bits/stdc++.h>
using namespace std;

int n, k;
bool ok=true;
int a[1005];

void in(){
	for(int i=1; i<=k;i++){
		cout<<a[i];
	}
	cout<<" ";
}

void sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		i--;
	}
	if(i==0) ok=false;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
	
}

int main(){
	int t; cin>>t;
	while(t--){
		ok=true;
		cin>>n>>k;
		for(int i=1; i<=k; i++){
			a[i]=i;
		}
		while(ok){
			in();
			sinh();	
		}
		cout<<endl;

	}
	return 0;
}

