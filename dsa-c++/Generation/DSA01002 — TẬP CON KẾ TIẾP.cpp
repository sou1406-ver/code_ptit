#include <bits/stdc++.h>
using namespace std;

int n, k, a[1005];
	
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0; i<k;i++){
			cin>>a[i];
		}
		int i=k-1;
		while(i>=0 && a[i]==n-k+i+1){
			i--;
		}
		if(i<0){
			for(int i=0;i<k;i++){
				cout<<i+1<<" ";
			}
			cout<<endl;
		}
		else{
			a[i]++;
			for(int j=i+1;j<k;j++){
				a[j]=a[j-1]+1;
			}
			for(int l=0;l<k;l++){
				cout<<a[l]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
