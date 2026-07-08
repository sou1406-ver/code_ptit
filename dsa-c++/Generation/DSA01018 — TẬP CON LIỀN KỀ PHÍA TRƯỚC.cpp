#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[1005];

void sinh() {
    int i = k - 1;
	while(i>=0){
		if(i==0){
			if(a[i]>1) break;
		}
		else{
			if(a[i]>a[i-1]+1) break;
		}
		i--;	
	}
	if(i<0){
		for(int j=0; j<k;j++) a[j]=n-k+j+1;
	}
	else{
		a[i]--;
		for(int j=i+1; j<k;j++){
			a[j]=n-k+j+1;
		}
	}
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        cin >> n >> k;

        for(int i = 0; i < k; i++) {
            cin >> a[i];
        }

        sinh();

        for(int i = 0; i < k; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
