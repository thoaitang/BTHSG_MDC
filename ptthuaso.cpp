#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
vector<int> factorize(int x){
    vector<int> res;
    res.reserve((int)sqrt(x)+1);
    for(int i = 2;i*i <= x;++i){
        while(x %i ==0){
            res.emplace_back(i);
            x /= i;
        }
    }
    if (x != 1){
        res.emplace_back(x);
    }
    return res;
}

int  main(){
    ios::sync_with_stdio(0);cin.tie(0);
    freopen("ptthuaso.inp","r",stdin);
    freopen("ptthuaso.out","w",stdout);

    int n;
    cin>>n;
    vector<int>ans = factorize(n);
    for(int i =0;i<(int)ans.size()-1;++i){
        cout<<ans[i]<<".";
    }
    cout<<ans[(int)ans.size()-1];
    return 0;
}
