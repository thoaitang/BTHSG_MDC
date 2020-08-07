#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("ntcn.inp","r",stdin);
	freopen("ntcn.out","w",stdout);
	
	int n;
	cin>>n;
	vector<int>a(n);
	int max = -10000;
	for(int i =0;i<n;++i){
		cin>>a[i];
		if(a[i] > max) max = a[i];
	}
	while(max--){
		int i = n-1;
		while(i && __gcd(max,a[i])==1) --i;
		if(i==0){
			cout<<max;
			break;
		}
	
	}
	return 0;
}
