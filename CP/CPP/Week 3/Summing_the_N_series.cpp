// https://www.hackerrank.com/challenges/summing-the-n-series/problem

#include<iostream>
using namespace std;

//This is the function which you need to apply in hackerrank solution (no main required)
int summingSeries(long n) {
    
    long long int MOD = 1000000000 + 7;
    long long int sum = 0;
    
    sum = (n%MOD)*(n%MOD);
    
    return sum%MOD;
    
}

int main()
{
    long n;
    cin>>n; 

    cout<<summingSeries(n); 

return 0;
}

/*

input
2
2
1

output
4
1

*/