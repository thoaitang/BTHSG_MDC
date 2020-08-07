#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("wood.inp","r",stdin);
	freopen("wood.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int>a(n);
	for(int i =0;i<n;++i){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int l =1,r = a[n-1];
	int h =0;
	while(l<=r){
		int mid = (l+r)/2;
		int sum =0;
		for(int i =0;i<n;++i){
			if(a[i]>mid) sum+=(a[i]-mid);
		}
		if(sum>m) {
			h = mid;
			l = mid +1;
		}
		else
		if(sum<m) r = mid-1;
		else
		if(sum == m){
			l=mid+1;
			h= mid;
		}
	}	
	cout<<h;
	return 0;
}
