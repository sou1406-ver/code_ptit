#include <bits/stdc++.h>
using namespace std;

int n, a[1005];
int len;

void in(){
	cout<<"[";
	for(int j=0; j< len ;j++){
		cout<<a[j];
		if(j!=len-1)  cout<<" ";
	}
	cout<<"]"<<endl;
}

void Try(int i){
	len=n-i;
	if(i==n) return;
	in();
	for(int j=0; j<n-i;j++){
		a[j]=a[j]+a[j+1];
	}
	Try(i+1);
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n;i++){
			cin>>a[i];
		}
		Try(0);
	}
	return 0;
}

