#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[1005]; 
bool ok;

void in(){
	for(int i=1; i<=n ;i++){
		cout<<a[i];
	}
	cout<<endl;
}

void sinh(){
	int i=n;
	while(i>=1 && a[i]==1) {
		a[i]=0;	
		--i;
	}
	if(i==0) ok=false;
	else a[i]=1;
	
}

bool check(){
    int dem=0;
    for(int i=1; i<=n;i++){
    	if(a[i]==1) dem++;
    }
   	return dem==k;
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		ok=true;
		for(int i=1; i<=n;i++){
			a[i]=0;
		}
		while(ok){
			if(check()) in();
			sinh();
		}
	}
}



