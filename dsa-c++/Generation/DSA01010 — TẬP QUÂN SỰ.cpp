#include <bits/stdc++.h>
using namespace std;

int n, k;
bool ok=true;
int a[1005],b[1005];

void sinh() {
	int i=k-1;
	for(int i=0; i<k; i++) {
		b[i]=a[i];
	}
	while(i>=0 && b[i]==n-k+i+1) {
		i--;
	}
	if(i<0) ok=false;
	else {
		b[i]++;
		for(int j=i+1; j<k; j++) {
			b[j]=b[j-1]+1;
		}
	}

}

int main() {
	int t;
	cin>>t;
	while(t--) {
		ok=true;
		cin>>n>>k;
		for(int i=0; i<k; i++) {
			cin>>a[i];
		}
		sinh();
		int dem=0;
		if(!ok) dem=0;
		else {
			for(int i=0; i<k; i++) {
				for(int j=0; j<k; j++) {
					if(a[i]==b[j]) dem++;
				}
			}
		}
		cout<<k-dem<<endl;

	}
	return 0;
}

