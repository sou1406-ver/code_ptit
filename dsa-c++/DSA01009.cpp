#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[1005]={0}; 
bool ok;
vector<string> ans;

string in(){
	string s="";
	for(int i=1; i<=n ;i++){
		if(a[i]==0) s+="A";
		else s+="B";
	}
	return s;
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
	int dem1=0, dem2=0;
	for(int i=1;i<=n;i++){
		if(a[i]==0){
			dem1++;
			if(dem1==k) dem2++;
		}
		else dem1=0;
	}
	if(dem1>k) return false;
	
	return dem2==1;
}

int main(){
	cin>>n>>k;
	ok=true;
	while(ok){
		sinh();
		if(check()){
			ans.push_back(in());	
		}
	}
	for(string s: ans) cout<<s<<endl;
	return 0;
}



