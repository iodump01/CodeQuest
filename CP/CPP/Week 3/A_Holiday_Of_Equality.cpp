// https://codeforces.com/problemset/problem/758/A

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    int n,count=0;
    cin>>n;

    vector<int> v1(n);

    for(int i = 0; i<n; i++)
    {
        cin>>v1[i];
    }

    int maxElement = *max_element(v1.begin(), v1.end());

    for(int i = 0; i<n; i++)
    {
        count += maxElement - v1[i];
    }

    cout<<count;

return 0;
}

/*

input
5
0 1 2 3 4
output
10

input
5
1 1 0 1 1
output
1

*/