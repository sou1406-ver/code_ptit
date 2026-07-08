#include <bits/stdc++.h>
using namespace std;

int n;
int a[1005]; 

void in(){
	for(int i=1; i<=n ;i++){
		cout<<a[i];
	}
	cout<<" ";
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=1; i<=n;i++){
			a[i]=i;
		}
		do{
			in();
		}
		while(next_permutation(a+1, a+n+1));
		cout<<endl;
	}
}

