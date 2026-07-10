#include <bits/stdc++.h>
using namespace std;

int m, n, a[1005][1005], cnt;
int dx[2]={0,1};
int dy[2]={1,0};

void Try(int i, int j){
	if(i==m-1 && j==n-1){
		cnt++;
		return;
	}
	for(int k=0; k<2;k++){
		if(i+dx[k]<=m-1 && j+dy[k]<=n-1){
			Try(i+dx[k], j+dy[k]);
		}
		
	}
}


int main(){
    int t; 
    cin >> t;
    while(t--){
        cin >> m >> n;
        for(int i=0; i<m;i++){
        	for(int j=0; j<n;j++) cin>>a[i][j];
		}
		cnt=0;
		Try(0,0);
		cout<<cnt<<endl;
	}
    return 0;
}
