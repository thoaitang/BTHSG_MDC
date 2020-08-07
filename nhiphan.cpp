#include <bits/stdc++.h>


using namespace std;
int n;
bitset<31>bin;
void printOut(){
	for(int i= 0;i<n;++i){
		cout<<bin[i];
	}
	cout<<"\n";
}

void generate(int x){
	if(x == n) printOut();
	else
	for(int j = 0;j<=1;++j){
		bin[x] = j;
		generate(x+1);
	}
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("nhiphan.inp","r",stdin);
	freopen("nhiphan.out","w",stdout);
	cin>>n;
	generate(0);
	return 0;
}
