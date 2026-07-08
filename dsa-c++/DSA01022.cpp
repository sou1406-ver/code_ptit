#include<bits/stdc++.h>
using namespace std;

int n, a[1005], b[1005];

bool check(){
	for(int i=0; i<n;i++){
		if(a[i]!=b[i]) return false;
	}
	return true;
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n;i++) cin>>b[i];
		for(int i=0; i<n;i++) a[i]=i+1;
		int cnt=1;
		while(!check()){
			next_permutation(a, a+n);
			cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
