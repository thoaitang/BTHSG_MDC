#include <bits/stdc++.h>

using namespace std;
const int maxn = 1000001;

bitset<maxn>prime;
int n,h;

void getPrime(int x){
	prime.set();
	prime[0] = 0;
	prime[1] = 0;
	for(int i =2;i*i<=x;++i){
		if(prime[i]){
			for(int j=i*i;j<=x;j+=i){prime[j] =0;}
		}
	}
}

bool height(int x){
	int res =0;
	while (x!=0){
		res += x%10;
		x = x/10;
	}
	if (res == h) return true;
	else return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("hprime.inp","r",stdin);
	freopen("hprime.out","w",stdout);
	cin>>n>>h;
	getPrime(n);
	bool hadResult = false;
	for(int i =0;i<=n;++i){
		if(prime[i] && height(i)){
			cout<<i<<" ";
			hadResult = true;
		}
	}
	if(!hadResult) cout<<-1;
	return 0;
}
