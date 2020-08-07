#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define deb(x) cout<<#x<<" "<<x<<"\n"; 

using namespace std;

const char _sign[] = {'+','-','0'};
const char _number[] = {'1','2','3','4','5','6','7','8','9'};

int n;
string sign = "";
vector<string>ans;

void _put_out(){
    cout<<ans.size()<<"\n";
    for(int i =0;i<(int)ans.size();++i){
        cout<<ans[i]<<"=0"<<"\n";
    }
}

void test(){
    string model = "";
    model += '1';
    for(int c = 1;c<n;++c)
    {
        if(c-1<(int)sign.length() && sign[c-1] != '0')
        {
            model += sign[c-1];
            model += _number[c];
        }
        else model += _number[c];
    }

    int pos = 0;
    int isnegative = 1;
    int sum = 0;
    while(pos<(int)model.length())
    {
        if(model[pos] == '+' || model[pos] == '-') {
            if(model[pos]=='+') isnegative = 1;
            else isnegative = -1;
            ++pos;
        }
        else
        {
            int num = 0;
            while(pos<(int)model.length() && (find(_number,_number+8,model[pos])!=(_number+8)))
            {
                num = num*10 + (int)(model[pos] - '0');
                ++pos;
            }
            sum += isnegative*num;

        }
    }
    if(sum==0) ans.push_back(model);
}


void tryit(int x)
{
    for(int i= 0;i<3;++i)
    {
        sign.push_back(_sign[i]);
        if(x==n-2) test();
        else tryit(x+1);
        sign.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("zero.inp","r",stdin);
    freopen("zero.out","w",stdout);
    cin>>n;
    if(n<3) cout<<0;
    else 
    {
        tryit(0);
    }
    _put_out();
    return 0;
}