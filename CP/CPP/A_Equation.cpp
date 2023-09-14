// https://codeforces.com/problemset/problem/1269/A

#include<iostream>
using namespace std;
int isprime(int n)
{
    if( n <= 2) 
        return true;
    for(int i = 2; i * i <= n; i++)
        if(n%i == 0)
            return false;
    return true;
}
int main()
{
    int n; 
    cin>>n;
    for(int x = 4; x <= 1000; x++)
    {
        int a = n + x;
        int b = x;
        if(isprime(a) || isprime(b)) continue;
        if(a - b == n)
        {
            cout<<a<<" "<<b<<endl;
            return 0 ;
        }
    }
    return 0;
}

/*

input
1
output
9 8

input
512
output
4608 4096

*/