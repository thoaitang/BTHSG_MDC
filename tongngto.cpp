#include <iostream>
#include <vector>
#include <bitset>
const int upperb=1000001;

using namespace std;

bitset<upperb> prime;

void getPrime(){
	prime.set();
    prime[0] = 0;
    prime[1] = 0;
    for(int i=2; i*i < upperb; ++i){
        if(prime[i]){
            for(int j= i*i;j<upperb;j+=i){ prime[j]=0;}
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("tongngto.inp","r",stdin);
    freopen("tongngto.out","w",stdout);
    int l,r;
    cin>>l>>r;
    getPrime();
    int max = -1;
    int res = 0;
    while (l<=r){
        int scase = 0;
        for(int i=2;i<l;++i){
            if(prime[i] && prime[l-i]) ++scase;
        }
        if(scase > max) {
            max = scase;
            res = l;
        }
        ++l;
    }
    cout<<res;
    return 0;
}
