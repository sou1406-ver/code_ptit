#include <bits/stdc++.h>
using namespace std;

int k, n, a[1005], sum;
vector<int> tmp;
bool found;
int ans;

void Try(int sum, int i){
	if(sum>k || tmp.size()>=ans) return;
	if(sum==k){
		found=true;
		ans=tmp.size();
		return;
	}
	for(int j=i-1; j>=0;j--){
		if(sum+a[j]<=k){
			tmp.push_back(a[j]);
			Try(sum+a[j], j);
			tmp.pop_back();
		}
	
		
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
		found=false;
		tmp.clear();
		ans=99999;
		Try(0, n);
		if(found) cout<<ans<<endl;
		else cout<<"-1"<<endl;
		
	}
    return 0;
}
