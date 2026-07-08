#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, a[1005];
	vector<string> ans;
	cin>>n>>k;
	int mt[n+1][n+1];
	for(int i=1; i<=n;i++)
		for(int j=1; j<=n;j++) cin>>mt[i][j];
	for(int i=1; i<=n;i++) a[i]=i;
	do{
		int sum=0;
		string s;
		for(int i=1; i<=n;i++){
			sum+=mt[i][a[i]];
		}
		if(sum==k){
			for(int i=1; i<=n; i++){
				s+= (char)(a[i]+'0');
				s+=" ";
			} 
			ans.push_back(s);
		}
	}
	while(next_permutation(a+1, a+n+1));
	cout<<ans.size()<<endl;
	for(string s: ans) cout<<s<<endl;
	return 0;
}
