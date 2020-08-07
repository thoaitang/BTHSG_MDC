#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int a[1000000];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("sohn.inp","r",stdin);
	freopen("sohn.out","w",stdout);
	
	int n;
	cin>>n;
	for(int i =1;i<n+1;++i){
		int sum = 1;
		for(int j=2;j<=(int)sqrt(i);++j){
			if(i%j==0){
				if(j == (i/j)){
					sum += j;
				}
				else sum += (j + i/j);
			}
		}
		a[i] = sum;
	}
	for(int i=1;i<=n;++i){
		if(a[i] <= n){
			if(i == a[a[i]] && i != a[i] && i<a[i]) cout<<i<<" "<< a[i]<<"\n";
		}
	}
	return 0;
}
