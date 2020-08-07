#include <bits/stdc++.h>

using namespace std;

int n;
int guess[10] = {1,2,3,4,5,6,7,8,9,10};
int ans[10];
bitset<11> chosen;

void xuat(){
	for(int j =0;j<n;++j){
		cout<<ans[j];
	}
	cout<<"\n";
}

void hoanvi(int x){
	if(x== n) xuat();
	else
	{
		for(int i =0;i<n;++i){
			if(chosen[i]) continue;
			chosen[i] = 1;
			ans[x] = guess[i];
			hoanvi(x+1);
			chosen[i] = 0;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("hoanvi.inp","r",stdin);
	freopen("hoanvi.out","w",stdout);
	cin>>n;
	hoanvi(0);
	return 0;
}
