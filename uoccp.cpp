#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	freopen("uoccp.inp","r",stdin);
	freopen("uoccp.out","w",stdout);
	int n;
	cin>>n;
	vector<int>a;
	a.reserve(n/2);
	for(int i = 2;i <=n/2;i++){
		if(n%i==0){
			int res = (int)sqrt(i);
			if(res*res==i) a.emplace_back(i); 
		}
	}
	int tmp = (int)sqrt(n);
	if(tmp*tmp==n)a.emplace_back(n);
	if((int)a.size()==0) puts("-1");
	else for(int i =0;i<(int)a.size();++i)cout<<a[i]<<" ";
	return 0;
}
