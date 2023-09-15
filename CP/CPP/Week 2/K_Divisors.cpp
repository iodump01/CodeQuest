// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        if(n%i == 0)
            cout<<i<<endl;
    }

return 0;
}

/*

input
6

output
1
2
3
6

*/