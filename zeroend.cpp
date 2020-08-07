#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("zeroend.inp","r",stdin);
	freopen("zeroend.out","w",stdout);
	int n;
	cin>>n;
	string bin;
	while(n){
		cin>>bin;
		int l =0 ,r = bin.length()-1;
		while(l<=r){
			int mid = (l+r)/2;
			if(bin[mid] =='0') {
				l = mid +1;
			}
			else
				if(bin[mid] =='1') r = mid-1;
		}
		if(l+1>(int)bin.length() || l-1<0) cout<<-1<<'\n';
		else cout<<l+1<<'\n';
		n--;
	}
	return 0;
}
