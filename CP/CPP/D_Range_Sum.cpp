// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

#include<iostream>
using namespace std;
int main()
{
    unsigned long long int n, left, right, sum = 0, res1, res2;
    cin>>n;

    unsigned long long int arr[n];

    for(int i = 0; i<n; i++)
    {
        sum = 0;
        cin>>left>>right;

        if(left>=right)
        {
            swap(left,right);
        }
        
        res1 = right*(right+1)/2;
        res2 = (left-1)*(left)/2;

        sum = res1 - res2;

        arr[i] = sum;
    }

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
return 0;
}

/*

input
4
3 6
2 11
4 16
7 17

output
18
65
130
132

*/
