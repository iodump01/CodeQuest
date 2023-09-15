// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

#include<iostream>
using namespace std;

bool isPrime(int x)
{
    int flag = 0;
    for(int i = 2; i<x; i++)
    {
        if(x%i == 0)
        {
            flag = 1;
            break;
        }

    }
        
    if(flag == 0)
        return true;
    else if(flag == 1)
        return false;
}

int main()
{
    int n,current_no = 2,flag=0;
    cin>>n;

    while(current_no<=n)
    {
        if(isPrime(current_no))
            cout<<current_no<<" ";
            
        current_no++;
    }
return 0;
}

/*

input
10

output
2 3 5 7

*/