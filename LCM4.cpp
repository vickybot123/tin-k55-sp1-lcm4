#include<iostream>

using namespace std;

long long lcm(long long x,long long y)
{
    long long k=x*y;
    while(y!=0)
    {
        long long r=x%y;
        x=y;
        y=r;
    }
    return k/x;
}

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    cout << lcm(a,lcm(b,lcm(c,d)));
}
