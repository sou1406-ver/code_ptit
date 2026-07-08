#include <bits/stdc++.h>
using namespace std;

int n, k, a[1005];
bool found; 
vector<int> tmp;
int sum;


void in(){
	cout<<"[";
	for(int i=0; i< tmp.size();i++){
		cout<<tmp[i];
		if(i!= tmp.size()-1) cout<<" ";
	}
	cout<<"]"<<" ";
}

void Try(int pos, int sum){
	if(sum==k){
		found=true;
		in();
		return;
	}
	else if(sum>k || pos==n) return;
	else{
		tmp.push_back(a[pos]);
		Try(pos+1, sum+ a[pos]);
		tmp.pop_back();
		Try(pos+1, sum);
		
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0; i<n;i++) cin>>a[i];
		sort(a, a+n);
		tmp.clear();
		found=false;
		Try(0, 0);
		if(!found) cout<<"-1";
		cout<<endl;
	}
	return 0;
}
