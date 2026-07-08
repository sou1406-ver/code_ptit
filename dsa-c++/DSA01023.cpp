#include<bits/stdc++.h>
using namespace std;

int a[1005], b[1005], n, k;
bool ok;

bool check(){
	for(int i=0; i<k;i++){
		if(a[i]!=b[i]) return false;
	}
	return true;
}

void sinh(){
	int i=k-1; 
	while(i>=0 && a[i]==n-k+i+1) i--;
	if(i<0) ok=false;
	else{
		a[i]++;
		for(int j=i+1; j<k;j++){
			a[j]=a[j-1]+1;
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0; i<k ; i++){
			cin>>b[i];
		}
		int cnt=1;
		for(int i=0; i<k;i++) a[i]=i+1;
		ok=true;
		while(!check()){
			cnt++;
			sinh();
		}
		cout<<cnt<<endl;
	}
	return 0;
}
