#include <bits/stdc++.h>
using namespace std;

int n, a[1005];
int len;
vector<vector<int>> ans;
vector<int> tmp;

void in(vector<int> tmp){
	cout<<"[";
	for(int j=0; j< tmp.size() ;j++){
		cout<<tmp[j];
		if(j!= tmp.size()-1)  cout<<" ";
	}
	cout<<"]"<<" ";
}

void Try(int i){
	len=n-i;
	if(i==n) return;
	for(int j=0; j<len; j++) tmp.push_back(a[j]);
	ans.push_back(tmp);
	tmp.clear();
	for(int j=0; j<len-1;j++){
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
		ans.clear();
		Try(0);
		for(int i= ans.size()-1;i>=0;i--){
			in(ans[i]);
		}
		cout<<endl;
	}
	return 0;
}
