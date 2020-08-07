#include <bits/stdc++.h>

using namespace std;

int sumD(int x){
	int res =0;
	for(int i =2;i<=(int)sqrt(x);++i){
		if(x%i==0){
			if(i==(x/i)) res += i;
			else res += (x/i + i);
		}
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("sogiauco.inp","r",stdin);
	freopen("sogiauco.out","w",stdout);
	
	int l,r;
	cin>>l>>r;
	while(l<=r){
		if (sumD(l)>l) cout << l << " ";
		++l;
	}
	return 0;
}
