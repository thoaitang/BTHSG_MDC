#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("sodb.inp","r",stdin);
	freopen("sodb.out","w",stdout);
	
	int n;
	cin>>n;
	int min = 1000000010;
	vector<int> a(n);
	for(int i =0;i<n;++i){
		cin>>a[i];
		if(a[i]<min) min = a[i];
	}
	for(long long i =2;i<=min;++i){
		long long j = 1;
		int last = a[0] % i;
		while(a[j]%i == last && j<n) ++j;
		if(j==n) cout<<i<<" ";
	}
	return 0;
}
