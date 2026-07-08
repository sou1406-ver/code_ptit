#include <bits/stdc++.h>
using namespace std;

string s, res;
int n, used[1005];
vector<string> ans;

void sinh(int pos){
	for(int i=0; i<n;i++){
		if(!used[i]){
			res+=s[i];
			used[i]=true;
			if(pos==n){
				ans.push_back(res);
			}
			else sinh(pos+1);	
			used[i]=false;
			res.pop_back();	
		} 
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>s;
		n=s.size();
		res="";
		ans.clear();
		sinh(1);
		for(string x: ans) cout<<x<<" ";
		cout<<endl;
	}
	return 0;
}
