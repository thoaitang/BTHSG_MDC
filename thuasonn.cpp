#include <iostream>
#include <vector>
using namespace std;


int sumFactorize(int x,vector<int>& a){
    int count = 0;
    if(x<=1) return 0;
    while (x!=1){
        ++count;
        x /= a[x];
    }
    return count;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("thuasonn.inp","r",stdin);
    freopen("thuasonn.out","w",stdout);
    vector<int>minPrime(100000+1);
    int maxn;
    cin>>maxn;
   // int res = 0;
    // int max = 0;
    // for(int i =0;i<=maxn;++i){
    //     int tmp = i;
    //     int count = 0;
    //     for(int j=2;j*j<=tmp;++j){
    //         while(tmp % j == 0){
    //             ++count;
    //             tmp /= j;
    //         }
    //         if(tmp != 1) ++count;
    //         if(count>max) {
    //             max = count;
    //             res = i;
    //         }
    //     }
    // }
    // cout<<res;
    for(int i=2; i*i <= 100000; ++i){
        if(minPrime[i]==0){
            for(int j= i*i; j <= 100000; j += i){
                if(minPrime[j] == 0) minPrime[j] = i;
            }
        }
    }
    for(int i =2; i<=100000;++i){
        if(minPrime[i]==0) minPrime[i] = i;
    }
    int ans = 0;
    int total = 0;
    for(int i =0; i<=maxn;++i){
        int res = sumFactorize(i,minPrime);
        if(res>total){
            total = res;
            ans = i;
        }
    }
    cout<<ans;
    return 0;
}