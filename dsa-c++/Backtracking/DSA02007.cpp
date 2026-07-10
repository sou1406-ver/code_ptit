#include <bits/stdc++.h>
using namespace std;

int n; 
string s;

void Try(int i, int pos){
	if(i>n || pos==s.size()){
		return;
	}
	char tmp=s[pos];
	int res=pos+1;
	for(int j=pos+1; j<s.size();j++){
		if(s[j]>=tmp){
			res=j;
			tmp=s[j];
		}
	}
	if(tmp==s[pos]){
		Try(i, pos+1);
		return;
	}
	swap(s[pos], s[res]);
	Try(i+1, pos+1);
	
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>s;
		Try(1,0);
		cout<<s<<endl;
	}
	return 0;
}
