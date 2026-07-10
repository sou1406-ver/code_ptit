#include <bits/stdc++.h>
using namespace std;

int k, n, a[1005], sum;
bool ok;


int main(){
    int t; 
    cin >> t;
    while(t--){
        cin >> n >> k;
        sum=0;
        ok=true;
        for(int i=0; i<n;i++){
        	cin>>a[i];
        	sum+=a[i];
		}
		if(sum%k!=0){
			ok=false;
		}
		else{
			sum/=k;
			for(int i=0; i<n;i++){
				if(a[i]>sum){
					ok=false;
					break;
				}
			}
		}
		if(ok) cout<<1<<endl;
		else cout<<0<<endl;
    }

    return 0;
}
