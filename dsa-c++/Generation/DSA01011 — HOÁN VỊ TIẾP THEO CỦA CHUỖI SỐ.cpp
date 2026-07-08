#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, a[1005];
		int tc;
		cin>>tc;
		string s;
		cin>>s;
		n=s.size();
		for(int i=0; i<n; i++) a[i]=int(s[i]-'0');
		int i=n-2;
		while(i>=0 && a[i+1]<=a[i]) i--;
		if(i<0) {
			cout<<tc<<" "<<"BIGGEST"<<endl;
		} else {
			int j=n-1;
			while(j>i && a[i]>=a[j]) j--;
			swap(a[i], a[j]);
			sort(a+i+1, a+n);
			cout<<tc<<" ";
			for(int i=0; i<n ; i++) cout<<a[i];
			cout<<endl;
		}

	}
	return 0;
}

