#include <bits/stdc++.h>

using namespace std;

int X[31],T[31];
int n;

void xuly(int i)
{
    int j;
    for(j = X[i - 1]; j <= (n - T[i - 1]); j++)  // X[i-1] <= X[i] <= n - T[i-1]
    {
        X[i] = j;
        T[i] = T[i - 1] + j;
 
        if(T[i] == n)   // nếu T[i] = n
        {
            int temp;
            for(temp = 1;  temp <= i; temp++)   // in ra từ X[1] tới X[i]
            {
				cout<<X[temp];
            }
            cout<<"\n";
        }
 
        else
        {
            xuly(i + 1);
        }
    }
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("ptso.inp","r",stdin);
	freopen("ptso.out","w",stdout);
	cin >>n;
	X[0] =1;
	T[0] = 0;
	xuly(1);
	return 0;
}
