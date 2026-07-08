#include<bits/stdc++.h>
using namespace std;
using ll= long long;

ll res[501];
vector<string> ans;
string s;
bool ok;

void sinh(){
	int i= s.size()-1;
	while(i>=0 && s[i]=='9'){
		s[i]='0';
		--i;
	}
	if(i==-1) ok=false; 
	else s[i]='9';
}


int main(){
	int t; cin>>t;
	s="00000000000009";
	ok=true;
	while(ok) {
		ans.push_back(s); 
		sinh();
	}
	for(int i=1; i<=500; i++){
		for(string x: ans){
			if(stoll(x)%i==0){
				res[i]=stoll(x); 
				break;
			}
		}
	}
	while(t--){
		
		int n; cin>>n;
		cout<<res[n]<<endl;
	}
	return 0;
}
