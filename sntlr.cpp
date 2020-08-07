#include <bits/stdc++.h>

using namespace std;

long long _sieve_size;
bitset<10000010> bs;
vector<int> primes;

void sieve(long long upperbound){
	_sieve_size = upperbound +1;
	bs.set();
	bs[0] = bs[1] = 0;
	for(long long i =2; i<_sieve_size;++i){
		if(bs[i]){
			for(long long j=i*i;j<=_sieve_size;j+=i) bs[j] =0;
			primes.push_back((int)i);
		}
	}
}

bool isPrime(long long x){
	if(x <= _sieve_size) return bs[x];
	for(int i =0;i<(int)primes.size();++i){
		if (x % primes[i] == 0) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	long long l,r;
	cin>>l>>r;
	sieve(10000000);
	while(l<=r){
		if(isPrime(l)) cout<<l<<' ';
		++l;
	}
	return 0;
}
