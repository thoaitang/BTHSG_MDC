#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("sodep.inp","r",stdin);
    freopen("sodep.out","w",stdout);
    int n;
    cin>>n;
    int num = 1;
    int pos =0;
    if(n==1) cout<<1;
    else
    {
        while(n!=pos){
            int sum = 0, len = 0;
            while(!num){
                sum += num % 10;
                len++;
                num /= 10;
            }
            if(sum/len == 0){
                ++pos;
            }
            ++num;
        }
        cout<<num;
    }
    
    return 0;
}