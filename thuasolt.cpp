#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("thusolt.inp","r",stdin);
    freopen("thusolt.out","w",stdout);
    int n;
    vector<pair<int,int>>ans;
    cin>>n;
    for(int i=2;i*i<=n;++i){
        int count= 0;
        int number = 0;
        while(n%i==0){
            number = i;
            count++;
            n/=i;
        }
        ans.push_back(make_pair(number,count));
    }
    if(n!=1) ans.push_back(make_pair(n,1));
    for(int i=0;i<(int)ans.size()-1;++i){
        if(ans[i].second!=0){
			if(ans[i].second == 1) cout<<ans[i].first<<".";
			else cout<<ans[i].first<<"^"<<ans[i].second<<".";
		}
    }
    cout<<ans[ans.size()-1].first;
    if(ans[ans.size()-1].second != 1)cout<<"^"<<ans[ans.size()-1].second;
    return 0;
}
