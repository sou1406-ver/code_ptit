#include <bits/stdc++.h>
using namespace std;

int k, n, a[1005], sum;
vector<vector<int>> ans;
vector<int> tmp;

void Try(int i, int sum){
	if(sum>k) return;
	if(sum==k){
		ans.push_back(tmp);
		return;
	}
	for(int j=i; j<n;j++){
		tmp.push_back(a[j]);
		Try(j, sum+a[j]);
		tmp.pop_back();
		
	}
}


int main(){
    int t; 
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=0; i<n;i++){
        	cin>>a[i];
		}
		sort(a, a+n);
		ans.clear();
		tmp.clear();
		Try(0, 0);
		if(ans.size()==0) cout<<"-1"<<endl;
		else{
			for(int i=0; i<ans.size();i++){
			cout<<"[";
				for(int j=0; j<ans[i].size();j++){
					cout<<ans[i][j];
					if(j!=ans[i].size()-1) cout<<" ";
				}
			cout<<"]";
			}
			cout<<endl;
		}
		
	}
    return 0;
}
