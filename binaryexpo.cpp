#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
int binarexporecur(int a,int b)
{
    if(b==0)
    return 1;
    long long res=binarexporecur(a,b/2);
    if(b&1)     //if b is odd
    return a*res*res;
    else
    return res*res;
}
int binexpitr(int a,int b)
{
    int ans=1;
    while(b)
    {
        if(b&1)   //check if rightmost bit is 1
        {
            ans=(ans*1LL*a)%M;
        }
        a=(a*1LL*a)%M;
        b>>=1; //leftshift by 1
    }
    return ans;
}
int main()
{
    int a=2,b=13;
    cout<<binexpitr(a,b)<<endl;
}