#include <bits/stdc++.h>

using namespace std;

bitset<60>prime;

void getPrime();
int comput(int x);


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("docaont.inp","r",stdin);
	freopen("docaont.out","w",stdout);
	int n;
	cin>>n;
	getPrime();
	for(int i =2;i<=n;++i){
		if(prime[comput(i)]) cout<<i<<" ";
	}
	return 0;
}

int comput(int x){
	int sum =0;
	while(x){
		sum += x%10;
		x /= 10; 
	}
	return sum;
}

void getPrime(){
	prime.set();
	prime[0] =0;
	prime[1] =1;
	for(int i=2;i*i<=60;++i){
		if(prime[i])
			for(int j = i*i;j<=60;j+=i) prime[j] =0;
	}
}
